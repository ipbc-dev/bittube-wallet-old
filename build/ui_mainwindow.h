/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "gui/AccountFrame.h"
#include "gui/AddressBookFrame.h"
#include "gui/OverviewFrame.h"
#include "gui/ReceiveFrame.h"
#include "gui/SendFrame.h"
#include "gui/TransactionsFrame.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *m_overviewAction;
    QAction *m_sendAction;
    QAction *m_receiveAction;
    QAction *m_transactionsAction;
    QAction *m_exitAction;
    QAction *m_addressBookAction;
    QAction *m_createWalletAction;
    QAction *m_openWalletAction;
    QAction *m_encryptWalletAction;
    QAction *m_changePasswordAction;
    QAction *m_aboutCryptonoteAction;
    QAction *m_aboutQtAction;
    QAction *m_backupWalletAction;
    QAction *m_startOnLoginAction;
    QAction *m_minimizeToTrayAction;
    QAction *m_closeToTrayAction;
    QAction *m_importKeyAction;
    QAction *m_resetAction;
    QAction *m_changeLanguageAction;
    QAction *m_showPrivateKey;
    QAction *actionHelp;
    QAction *m_connectionSettingsAction;
    QAction *m_openUriAction;
    QAction *m_exportTrackingKeyAction;
    QAction *m_importTrackingKeyAction;
    QAction *m_closeWalletAction;
    QAction *m_recentWalletsAction;
    QAction *actionStatus;
    QAction *m_openLogFileAction;
    QAction *m_showMnemonicSeedAction;
    QAction *m_restoreFromMnemonicSeedAction;
    QAction *m_createNondeterministicWalletAction;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    WalletGui::AccountFrame *m_accountFrame;
    WalletGui::OverviewFrame *m_overviewFrame;
    WalletGui::TransactionsFrame *m_transactionsFrame;
    WalletGui::SendFrame *m_sendFrame;
    WalletGui::AddressBookFrame *m_addressBookFrame;
    WalletGui::ReceiveFrame *m_receiveFrame;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuRecent_wallets;
    QMenu *menuSettings;
    QMenu *menuHelp;
    QToolBar *toolBar;
    QStatusBar *statusBar;
    QToolBar *accountToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(980, 550);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(8);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/window"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        m_overviewAction = new QAction(MainWindow);
        m_overviewAction->setObjectName(QStringLiteral("m_overviewAction"));
        m_overviewAction->setCheckable(true);
        m_overviewAction->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/overview"), QSize(), QIcon::Normal, QIcon::Off);
        m_overviewAction->setIcon(icon1);
        m_sendAction = new QAction(MainWindow);
        m_sendAction->setObjectName(QStringLiteral("m_sendAction"));
        m_sendAction->setCheckable(true);
        m_sendAction->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/send"), QSize(), QIcon::Normal, QIcon::Off);
        m_sendAction->setIcon(icon2);
        m_receiveAction = new QAction(MainWindow);
        m_receiveAction->setObjectName(QStringLiteral("m_receiveAction"));
        m_receiveAction->setCheckable(true);
        m_receiveAction->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/receive"), QSize(), QIcon::Normal, QIcon::Off);
        m_receiveAction->setIcon(icon3);
        m_transactionsAction = new QAction(MainWindow);
        m_transactionsAction->setObjectName(QStringLiteral("m_transactionsAction"));
        m_transactionsAction->setCheckable(true);
        m_transactionsAction->setEnabled(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/transactions"), QSize(), QIcon::Normal, QIcon::Off);
        m_transactionsAction->setIcon(icon4);
        m_exitAction = new QAction(MainWindow);
        m_exitAction->setObjectName(QStringLiteral("m_exitAction"));
        m_exitAction->setEnabled(true);
        m_addressBookAction = new QAction(MainWindow);
        m_addressBookAction->setObjectName(QStringLiteral("m_addressBookAction"));
        m_addressBookAction->setCheckable(true);
        m_addressBookAction->setEnabled(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        m_addressBookAction->setIcon(icon5);
        m_createWalletAction = new QAction(MainWindow);
        m_createWalletAction->setObjectName(QStringLiteral("m_createWalletAction"));
        m_createWalletAction->setEnabled(true);
        m_openWalletAction = new QAction(MainWindow);
        m_openWalletAction->setObjectName(QStringLiteral("m_openWalletAction"));
        m_openWalletAction->setEnabled(true);
        m_encryptWalletAction = new QAction(MainWindow);
        m_encryptWalletAction->setObjectName(QStringLiteral("m_encryptWalletAction"));
        m_encryptWalletAction->setEnabled(true);
        m_changePasswordAction = new QAction(MainWindow);
        m_changePasswordAction->setObjectName(QStringLiteral("m_changePasswordAction"));
        m_changePasswordAction->setEnabled(true);
        m_aboutCryptonoteAction = new QAction(MainWindow);
        m_aboutCryptonoteAction->setObjectName(QStringLiteral("m_aboutCryptonoteAction"));
        m_aboutCryptonoteAction->setEnabled(true);
        m_aboutQtAction = new QAction(MainWindow);
        m_aboutQtAction->setObjectName(QStringLiteral("m_aboutQtAction"));
        m_aboutQtAction->setEnabled(true);
        m_backupWalletAction = new QAction(MainWindow);
        m_backupWalletAction->setObjectName(QStringLiteral("m_backupWalletAction"));
        m_backupWalletAction->setEnabled(true);
        m_startOnLoginAction = new QAction(MainWindow);
        m_startOnLoginAction->setObjectName(QStringLiteral("m_startOnLoginAction"));
        m_startOnLoginAction->setCheckable(true);
        m_minimizeToTrayAction = new QAction(MainWindow);
        m_minimizeToTrayAction->setObjectName(QStringLiteral("m_minimizeToTrayAction"));
        m_minimizeToTrayAction->setCheckable(true);
        m_closeToTrayAction = new QAction(MainWindow);
        m_closeToTrayAction->setObjectName(QStringLiteral("m_closeToTrayAction"));
        m_closeToTrayAction->setCheckable(true);
        m_importKeyAction = new QAction(MainWindow);
        m_importKeyAction->setObjectName(QStringLiteral("m_importKeyAction"));
        m_resetAction = new QAction(MainWindow);
        m_resetAction->setObjectName(QStringLiteral("m_resetAction"));
        m_changeLanguageAction = new QAction(MainWindow);
        m_changeLanguageAction->setObjectName(QStringLiteral("m_changeLanguageAction"));
        m_showPrivateKey = new QAction(MainWindow);
        m_showPrivateKey->setObjectName(QStringLiteral("m_showPrivateKey"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        m_connectionSettingsAction = new QAction(MainWindow);
        m_connectionSettingsAction->setObjectName(QStringLiteral("m_connectionSettingsAction"));
        m_openUriAction = new QAction(MainWindow);
        m_openUriAction->setObjectName(QStringLiteral("m_openUriAction"));
        m_exportTrackingKeyAction = new QAction(MainWindow);
        m_exportTrackingKeyAction->setObjectName(QStringLiteral("m_exportTrackingKeyAction"));
        m_importTrackingKeyAction = new QAction(MainWindow);
        m_importTrackingKeyAction->setObjectName(QStringLiteral("m_importTrackingKeyAction"));
        m_closeWalletAction = new QAction(MainWindow);
        m_closeWalletAction->setObjectName(QStringLiteral("m_closeWalletAction"));
        m_recentWalletsAction = new QAction(MainWindow);
        m_recentWalletsAction->setObjectName(QStringLiteral("m_recentWalletsAction"));
        actionStatus = new QAction(MainWindow);
        actionStatus->setObjectName(QStringLiteral("actionStatus"));
        m_openLogFileAction = new QAction(MainWindow);
        m_openLogFileAction->setObjectName(QStringLiteral("m_openLogFileAction"));
        m_showMnemonicSeedAction = new QAction(MainWindow);
        m_showMnemonicSeedAction->setObjectName(QStringLiteral("m_showMnemonicSeedAction"));
        m_showMnemonicSeedAction->setEnabled(false);
        m_restoreFromMnemonicSeedAction = new QAction(MainWindow);
        m_restoreFromMnemonicSeedAction->setObjectName(QStringLiteral("m_restoreFromMnemonicSeedAction"));
        m_createNondeterministicWalletAction = new QAction(MainWindow);
        m_createNondeterministicWalletAction->setObjectName(QStringLiteral("m_createNondeterministicWalletAction"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_accountFrame = new WalletGui::AccountFrame(centralwidget);
        m_accountFrame->setObjectName(QStringLiteral("m_accountFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_accountFrame->sizePolicy().hasHeightForWidth());
        m_accountFrame->setSizePolicy(sizePolicy2);
        m_accountFrame->setMinimumSize(QSize(0, 70));
        m_accountFrame->setMaximumSize(QSize(16777215, 70));
        m_accountFrame->setStyleSheet(QStringLiteral(""));
        m_accountFrame->setFrameShape(QFrame::NoFrame);
        m_accountFrame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(m_accountFrame, 0, 0, 1, 6);

        m_overviewFrame = new WalletGui::OverviewFrame(centralwidget);
        m_overviewFrame->setObjectName(QStringLiteral("m_overviewFrame"));
        sizePolicy.setHeightForWidth(m_overviewFrame->sizePolicy().hasHeightForWidth());
        m_overviewFrame->setSizePolicy(sizePolicy);
        m_overviewFrame->setFrameShape(QFrame::NoFrame);
        m_overviewFrame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(m_overviewFrame, 1, 0, 1, 1);

        m_transactionsFrame = new WalletGui::TransactionsFrame(centralwidget);
        m_transactionsFrame->setObjectName(QStringLiteral("m_transactionsFrame"));
        sizePolicy.setHeightForWidth(m_transactionsFrame->sizePolicy().hasHeightForWidth());
        m_transactionsFrame->setSizePolicy(sizePolicy);
        m_transactionsFrame->setFrameShape(QFrame::NoFrame);
        m_transactionsFrame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(m_transactionsFrame, 1, 3, 1, 1);

        m_sendFrame = new WalletGui::SendFrame(centralwidget);
        m_sendFrame->setObjectName(QStringLiteral("m_sendFrame"));
        sizePolicy.setHeightForWidth(m_sendFrame->sizePolicy().hasHeightForWidth());
        m_sendFrame->setSizePolicy(sizePolicy);
        m_sendFrame->setFrameShape(QFrame::NoFrame);
        m_sendFrame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(m_sendFrame, 1, 1, 1, 1);

        m_addressBookFrame = new WalletGui::AddressBookFrame(centralwidget);
        m_addressBookFrame->setObjectName(QStringLiteral("m_addressBookFrame"));
        sizePolicy.setHeightForWidth(m_addressBookFrame->sizePolicy().hasHeightForWidth());
        m_addressBookFrame->setSizePolicy(sizePolicy);
        m_addressBookFrame->setFrameShape(QFrame::NoFrame);
        m_addressBookFrame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(m_addressBookFrame, 1, 4, 1, 1);

        m_receiveFrame = new WalletGui::ReceiveFrame(centralwidget);
        m_receiveFrame->setObjectName(QStringLiteral("m_receiveFrame"));
        sizePolicy.setHeightForWidth(m_receiveFrame->sizePolicy().hasHeightForWidth());
        m_receiveFrame->setSizePolicy(sizePolicy);
        m_receiveFrame->setFrameShape(QFrame::NoFrame);
        m_receiveFrame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(m_receiveFrame, 1, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 980, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuRecent_wallets = new QMenu(menuFile);
        menuRecent_wallets->setObjectName(QStringLiteral("menuRecent_wallets"));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(toolBar->sizePolicy().hasHeightForWidth());
        toolBar->setSizePolicy(sizePolicy3);
        toolBar->setMinimumSize(QSize(0, 0));
        toolBar->setMaximumSize(QSize(150, 16777215));
        toolBar->setBaseSize(QSize(150, 0));
        toolBar->setFont(font);
        toolBar->setMovable(false);
        toolBar->setAllowedAreas(Qt::LeftToolBarArea|Qt::TopToolBarArea);
        toolBar->setOrientation(Qt::Vertical);
        toolBar->setIconSize(QSize(20, 20));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        accountToolBar = new QToolBar(MainWindow);
        accountToolBar->setObjectName(QStringLiteral("accountToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, accountToolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(m_createWalletAction);
        menuFile->addAction(m_createNondeterministicWalletAction);
        menuFile->addAction(m_openWalletAction);
        menuFile->addAction(menuRecent_wallets->menuAction());
        menuFile->addAction(m_backupWalletAction);
        menuFile->addAction(m_resetAction);
        menuFile->addAction(m_closeWalletAction);
        menuFile->addSeparator();
        menuFile->addAction(m_openUriAction);
        menuFile->addAction(m_openLogFileAction);
        menuFile->addSeparator();
        menuFile->addAction(m_showMnemonicSeedAction);
        menuFile->addAction(m_restoreFromMnemonicSeedAction);
        menuFile->addSeparator();
        menuFile->addAction(m_showPrivateKey);
        menuFile->addAction(m_importKeyAction);
        menuFile->addSeparator();
        menuFile->addAction(m_exportTrackingKeyAction);
        menuFile->addAction(m_importTrackingKeyAction);
        menuFile->addSeparator();
        menuFile->addAction(m_exitAction);
        menuSettings->addAction(m_encryptWalletAction);
        menuSettings->addAction(m_changePasswordAction);
        menuSettings->addAction(m_changeLanguageAction);
        menuSettings->addAction(m_connectionSettingsAction);
        menuSettings->addSeparator();
        menuSettings->addAction(m_startOnLoginAction);
        menuSettings->addAction(m_minimizeToTrayAction);
        menuSettings->addAction(m_closeToTrayAction);
        menuHelp->addAction(m_aboutCryptonoteAction);
        menuHelp->addAction(m_aboutQtAction);
        menuHelp->addAction(actionHelp);
        toolBar->addAction(m_overviewAction);
        toolBar->addAction(m_sendAction);
        toolBar->addAction(m_receiveAction);
        toolBar->addAction(m_transactionsAction);
        toolBar->addAction(m_addressBookAction);

        retranslateUi(MainWindow);
        QObject::connect(m_createWalletAction, SIGNAL(triggered()), MainWindow, SLOT(createWallet()));
        QObject::connect(m_openWalletAction, SIGNAL(triggered()), MainWindow, SLOT(openWallet()));
        QObject::connect(m_encryptWalletAction, SIGNAL(triggered()), MainWindow, SLOT(encryptWallet()));
        QObject::connect(m_changePasswordAction, SIGNAL(triggered()), MainWindow, SLOT(encryptWallet()));
        QObject::connect(m_changeLanguageAction, SIGNAL(triggered()), MainWindow, SLOT(ChangeLanguage()));
        QObject::connect(m_aboutQtAction, SIGNAL(triggered()), MainWindow, SLOT(aboutQt()));
        QObject::connect(m_backupWalletAction, SIGNAL(triggered()), MainWindow, SLOT(backupWallet()));
        QObject::connect(m_aboutCryptonoteAction, SIGNAL(triggered()), MainWindow, SLOT(about()));
        QObject::connect(m_startOnLoginAction, SIGNAL(triggered(bool)), MainWindow, SLOT(setStartOnLogin(bool)));
        QObject::connect(m_minimizeToTrayAction, SIGNAL(triggered(bool)), MainWindow, SLOT(setMinimizeToTray(bool)));
        QObject::connect(m_closeToTrayAction, SIGNAL(triggered(bool)), MainWindow, SLOT(setCloseToTray(bool)));
        QObject::connect(m_resetAction, SIGNAL(triggered()), MainWindow, SLOT(resetWallet()));
        QObject::connect(m_importKeyAction, SIGNAL(triggered()), MainWindow, SLOT(importKey()));
        QObject::connect(m_showPrivateKey, SIGNAL(triggered()), MainWindow, SLOT(showPrivateKeys()));
        QObject::connect(actionHelp, SIGNAL(triggered()), MainWindow, SLOT(DisplayCmdLineHelp()));
        QObject::connect(m_connectionSettingsAction, SIGNAL(triggered()), MainWindow, SLOT(openConnectionSettings()));
        QObject::connect(m_transactionsAction, SIGNAL(toggled(bool)), m_transactionsFrame, SLOT(setVisible(bool)));
        QObject::connect(m_sendAction, SIGNAL(toggled(bool)), m_sendFrame, SLOT(setVisible(bool)));
        QObject::connect(m_overviewAction, SIGNAL(toggled(bool)), m_overviewFrame, SLOT(setVisible(bool)));
        QObject::connect(m_addressBookAction, SIGNAL(toggled(bool)), m_addressBookFrame, SLOT(setVisible(bool)));
        QObject::connect(m_receiveAction, SIGNAL(toggled(bool)), m_receiveFrame, SLOT(setVisible(bool)));
        QObject::connect(m_openUriAction, SIGNAL(triggered()), m_sendFrame, SLOT(openUriClicked()));
        QObject::connect(m_exportTrackingKeyAction, SIGNAL(triggered()), MainWindow, SLOT(exportTrackingKey()));
        QObject::connect(m_importTrackingKeyAction, SIGNAL(triggered()), MainWindow, SLOT(importTrackingKey()));
        QObject::connect(m_closeWalletAction, SIGNAL(triggered()), MainWindow, SLOT(closeWallet()));
        QObject::connect(m_openLogFileAction, SIGNAL(triggered()), MainWindow, SLOT(openLogFile()));
        QObject::connect(m_showMnemonicSeedAction, SIGNAL(triggered()), MainWindow, SLOT(showMnemonicSeed()));
        QObject::connect(m_restoreFromMnemonicSeedAction, SIGNAL(triggered()), MainWindow, SLOT(restoreFromMnemonicSeed()));
        QObject::connect(m_createNondeterministicWalletAction, SIGNAL(triggered()), MainWindow, SLOT(createNonDeterministicWallet()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        m_overviewAction->setText(QApplication::translate("MainWindow", "Overview", Q_NULLPTR));
        m_sendAction->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        m_receiveAction->setText(QApplication::translate("MainWindow", "Receive", Q_NULLPTR));
        m_transactionsAction->setText(QApplication::translate("MainWindow", "Transactions", Q_NULLPTR));
        m_exitAction->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        m_exitAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        m_addressBookAction->setText(QApplication::translate("MainWindow", "Contacts", Q_NULLPTR));
        m_createWalletAction->setText(QApplication::translate("MainWindow", "Create wallet", Q_NULLPTR));
        m_openWalletAction->setText(QApplication::translate("MainWindow", "Open wallet", Q_NULLPTR));
        m_encryptWalletAction->setText(QApplication::translate("MainWindow", "Encrypt wallet", Q_NULLPTR));
        m_changePasswordAction->setText(QApplication::translate("MainWindow", "Change password", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_changePasswordAction->setToolTip(QApplication::translate("MainWindow", "Change password", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        m_aboutCryptonoteAction->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        m_aboutQtAction->setText(QApplication::translate("MainWindow", "About Qt", Q_NULLPTR));
        m_backupWalletAction->setText(QApplication::translate("MainWindow", "Backup wallet", Q_NULLPTR));
        m_startOnLoginAction->setText(QApplication::translate("MainWindow", "Start on system login", Q_NULLPTR));
        m_minimizeToTrayAction->setText(QApplication::translate("MainWindow", "Minimize to tray", Q_NULLPTR));
        m_closeToTrayAction->setText(QApplication::translate("MainWindow", "Close to tray", Q_NULLPTR));
        m_importKeyAction->setText(QApplication::translate("MainWindow", "Import private key", Q_NULLPTR));
        m_resetAction->setText(QApplication::translate("MainWindow", "Reset wallet", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_resetAction->setToolTip(QApplication::translate("MainWindow", "Reset wallet", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        m_changeLanguageAction->setText(QApplication::translate("MainWindow", "Language", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_changeLanguageAction->setToolTip(QApplication::translate("MainWindow", "Change language", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        m_showPrivateKey->setText(QApplication::translate("MainWindow", "Export private key", Q_NULLPTR));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionHelp->setShortcut(QApplication::translate("MainWindow", "F1", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        m_connectionSettingsAction->setText(QApplication::translate("MainWindow", "Connection", Q_NULLPTR));
        m_openUriAction->setText(QApplication::translate("MainWindow", "Open payment request", Q_NULLPTR));
        m_exportTrackingKeyAction->setText(QApplication::translate("MainWindow", "Export tracking key", Q_NULLPTR));
        m_importTrackingKeyAction->setText(QApplication::translate("MainWindow", "Import tracking key", Q_NULLPTR));
        m_closeWalletAction->setText(QApplication::translate("MainWindow", "Close wallet", Q_NULLPTR));
        m_recentWalletsAction->setText(QApplication::translate("MainWindow", "Recent wallets", Q_NULLPTR));
        actionStatus->setText(QApplication::translate("MainWindow", "Information", Q_NULLPTR));
        m_openLogFileAction->setText(QApplication::translate("MainWindow", "Open log file", Q_NULLPTR));
        m_showMnemonicSeedAction->setText(QApplication::translate("MainWindow", "Show mnemonic seed", Q_NULLPTR));
        m_restoreFromMnemonicSeedAction->setText(QApplication::translate("MainWindow", "Restore from mnemonic seed", Q_NULLPTR));
        m_createNondeterministicWalletAction->setText(QApplication::translate("MainWindow", "Create nondeterministic wallet", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuRecent_wallets->setTitle(QApplication::translate("MainWindow", "Recent wallets", Q_NULLPTR));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Settings", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
        accountToolBar->setWindowTitle(QApplication::translate("MainWindow", "Account toolbar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
