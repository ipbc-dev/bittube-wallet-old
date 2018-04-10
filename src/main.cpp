// Copyright (c) 2011-2015 The Cryptonote developers
// Copyright (c) 2016-2017 The IPBC developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#include <QApplication>
#include <QCommandLineParser>
#include <QLocale>
#include <QTranslator>
#include <QLockFile>
#include <QMessageBox>
#include <QSplashScreen>
#include <QStyleFactory>
#include <QSettings>
#include <QProcess>

#include "CommandLineParser.h"
#include "CurrencyAdapter.h"
#include "LoggerAdapter.h"
#include "NodeAdapter.h"
#include "Settings.h"
#include "SignalHandler.h"
#include "WalletAdapter.h"
#include "gui/MainWindow.h"
#include "Update.h"
#include <QTextCodec>
#include "PaymentServer.h"

#define DEBUG 1

using namespace WalletGui;

int main(int argc, char* argv[]) {

	QApplication app(argc, argv);

	CommandLineParser cmdLineParser(nullptr);
	Settings::instance().setCommandLineParser(&cmdLineParser);
	bool cmdLineParseResult = cmdLineParser.process(app.arguments());
	Settings::instance().load();

	QString app_name = CurrencyAdapter::instance().getCurrencyName() + "wallet";
	QString testnet_ver_str(std::to_string(CryptoNote::TESTNET_VERSION).c_str());

	if (Settings::instance().isTestnet()) {
		app_name += "_testnet_" + testnet_ver_str;
	}

	app.setApplicationName(app_name);
	app.setApplicationVersion(Settings::instance().getVersion());
	app.setQuitOnLastWindowClosed(false);

#ifndef Q_OS_MAC
	QApplication::setStyle(QStyleFactory::create("Fusion"));
#endif
	
	QTranslator translator;
	QTranslator translatorQt;

	QString lng = Settings::instance().getLanguage();

	if (!lng.isEmpty()) {
		translator.load(":/languages/" + lng + ".qm");
		translatorQt.load(":/languages/qt_" + lng + ".qm");

		if (lng == "uk") {
			QLocale::setDefault(QLocale("uk_UA"));
		}
		else if (lng == "ru") {
			QLocale::setDefault(QLocale("ru_RU"));
		}
		else if (lng == "pl") {
			QLocale::setDefault(QLocale("pl_PL"));
		}
		else if (lng == "be") {
			QLocale::setDefault(QLocale("be_BY"));
		}
		else if (lng == "de") {
			QLocale::setDefault(QLocale("de_DE"));
		}
		else if (lng == "es") {
			QLocale::setDefault(QLocale("es_ES"));
		}
		else {
			QLocale::setDefault(QLocale::c());
		}

	}
	else {
		translator.load(":/languages/" + QLocale::system().name());
		translatorQt.load(":/languages/qt_" + QLocale::system().name());
		QLocale::setDefault(QLocale::system().name());
	}
	app.installTranslator(&translator);
	app.installTranslator(&translatorQt);

	//QLocale::setDefault(QLocale::c());

	//QLocale locale = QLocale("uk_UA");
	//QLocale::setDefault(locale);

	setlocale(LC_ALL, "");

	QFile File(":/skin/default.qss");
	File.open(QFile::ReadOnly);
	QString StyleSheet = QLatin1String(File.readAll());
	qApp->setStyleSheet(StyleSheet);

	if (PaymentServer::ipcSendCommandLine())
		exit(0);

	PaymentServer* paymentServer = new PaymentServer(&app);

#ifdef Q_OS_WIN
	if (!cmdLineParseResult) {
		QMessageBox::critical(nullptr, QObject::tr("Error"), cmdLineParser.getErrorText());
		return app.exec();
	}
	else if (cmdLineParser.hasHelpOption()) {
		QMessageBox::information(nullptr, QObject::tr("Help"), cmdLineParser.getHelpText());
		return app.exec();
	}
#endif

	// setup URI association
#if defined(Q_OS_LINUX)
	QStringList args;
	QProcess exec;

	//as root
	args << "-c" << "printf '[Desktop Entry]\\nName = IPBC URL Handler\\nGenericName = IPBC\\nComment = Handle URL Sheme ipbc://\\nExec = " + QCoreApplication::applicationFilePath() + " %%u\\nTerminal = false\\nType = Application\\nMimeType = x-scheme-handler/ipbc;\\nIcon = IPBC-Wallet' | tee /usr/share/applications/ipbc-handler.desktop";
	exec.start("/bin/sh", args);
	exec.waitForFinished();

	args.clear();
	args << "-c" << "update-desktop-database";
	exec.start("/bin/sh", args);
	exec.waitForFinished();
#endif

	LoggerAdapter::instance().init();

	QString dataDirPath = Settings::instance().getDataDir().absolutePath();

	if (!QDir().exists(dataDirPath)) {
		QDir().mkpath(dataDirPath);
	}

	QLockFile lockFile(Settings::instance().getDataDir().absoluteFilePath(QApplication::applicationName() + ".lock"));
	if (!lockFile.tryLock()) {
		QMessageBox::warning(nullptr, QObject::tr("Fail"), QObject::tr("%1 wallet already running").arg(CurrencyAdapter::instance().getCurrencyDisplayName()));
		return 0;
	}

	SignalHandler::instance().init();
	QObject::connect(&SignalHandler::instance(), &SignalHandler::quitSignal, &app, &QApplication::quit);

	QSplashScreen* splash = new QSplashScreen(QPixmap(":images/splash"), /*Qt::WindowStaysOnTopHint |*/ Qt::X11BypassWindowManagerHint);
	if (!splash->isVisible()) {
		splash->show();
	}

	if (Settings::instance().isTestnet()) {
		splash->showMessage(QObject::tr("[TESTNET] Loading blockchain..."), Qt::AlignLeft | Qt::AlignBottom, Qt::red);
	}
	else {
		splash->showMessage(QObject::tr("Loading blockchain..."), Qt::AlignLeft | Qt::AlignBottom, Qt::black);
	}

	if (Settings::instance().isTestnet()) {
		MainWindow::instance().setWindowTitle(MainWindow::instance().windowTitle() + " [TESTNET " + testnet_ver_str + "]");

		QLabel* ts_label = new QLabel((QWidget*)&MainWindow::instance(), 0);
		ts_label->setOpenExternalLinks(true);
		ts_label->setTextFormat(Qt::TextFormat::AutoText);
		ts_label->setAlignment(Qt::AlignCenter);
		QFont f("Arial", 15);
		ts_label->setFont(f);

		ts_label->move(QPoint(180, 1));
		ts_label->setFixedSize(QSize(100, 30));

		ts_label->setText("<a style='text-decoration:none; color: red;' href='http://testnet.ipbc.io'>TESTNET</a>");
		ts_label->setStyleSheet("QLabel { background-color : black; color : red; border: 1px solid; border-radius: 5px; }");

		ts_label->show();
	}
	
	app.processEvents();
	qRegisterMetaType<CryptoNote::TransactionId>("CryptoNote::TransactionId");
	qRegisterMetaType<quintptr>("quintptr");
	if (!NodeAdapter::instance().init()) {
		return 0;
	}
	splash->finish(&MainWindow::instance());

	if (!Settings::instance().isTestnet()) {

#ifdef _WIN32
		Updater d;
		if (!QCoreApplication::applicationFilePath().toLower().contains("ipbc/ipbc-wallet")) {
			d.checkForUpdate();
		}
#else
		Updater d;
		d.checkForUpdate();
#endif
	}

	MainWindow::instance().show();
	WalletAdapter::instance().open("");

	QTimer::singleShot(1000, paymentServer, SLOT(uiReady()));
	QObject::connect(paymentServer, &PaymentServer::receivedURI, &MainWindow::instance(), &MainWindow::handlePaymentRequest, Qt::QueuedConnection);

	QObject::connect(QApplication::instance(), &QApplication::aboutToQuit, []() {
		MainWindow::instance().quit();
		if (WalletAdapter::instance().isOpen()) {
			WalletAdapter::instance().close();
		}

		NodeAdapter::instance().deinit();
	});

	return app.exec();
}