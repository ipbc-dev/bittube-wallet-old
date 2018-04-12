/********************************************************************************
** Form generated from reading UI file 'mnemonicseeddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNEMONICSEEDDIALOG_H
#define UI_MNEMONICSEEDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MnemonicSeedDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *m_mnemonicSeedEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *m_languageLabel;
    QComboBox *m_languageCombo;
    QSpacerItem *horizontalSpacer;
    QPushButton *ClosePushButton;

    void setupUi(QDialog *MnemonicSeedDialog)
    {
        if (MnemonicSeedDialog->objectName().isEmpty())
            MnemonicSeedDialog->setObjectName(QStringLiteral("MnemonicSeedDialog"));
        MnemonicSeedDialog->resize(640, 120);
        MnemonicSeedDialog->setMinimumSize(QSize(600, 120));
        MnemonicSeedDialog->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        MnemonicSeedDialog->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/cryptonote"), QSize(), QIcon::Normal, QIcon::Off);
        MnemonicSeedDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(MnemonicSeedDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_mnemonicSeedEdit = new QTextEdit(MnemonicSeedDialog);
        m_mnemonicSeedEdit->setObjectName(QStringLiteral("m_mnemonicSeedEdit"));
        m_mnemonicSeedEdit->setFont(font);
        m_mnemonicSeedEdit->setReadOnly(true);

        verticalLayout->addWidget(m_mnemonicSeedEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_languageLabel = new QLabel(MnemonicSeedDialog);
        m_languageLabel->setObjectName(QStringLiteral("m_languageLabel"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        m_languageLabel->setFont(font1);

        horizontalLayout->addWidget(m_languageLabel);

        m_languageCombo = new QComboBox(MnemonicSeedDialog);
        m_languageCombo->setObjectName(QStringLiteral("m_languageCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_languageCombo->sizePolicy().hasHeightForWidth());
        m_languageCombo->setSizePolicy(sizePolicy);
        m_languageCombo->setFont(font1);

        horizontalLayout->addWidget(m_languageCombo);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ClosePushButton = new QPushButton(MnemonicSeedDialog);
        ClosePushButton->setObjectName(QStringLiteral("ClosePushButton"));
        ClosePushButton->setFont(font1);

        horizontalLayout->addWidget(ClosePushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(MnemonicSeedDialog);
        QObject::connect(ClosePushButton, SIGNAL(clicked()), MnemonicSeedDialog, SLOT(accept()));
        QObject::connect(m_languageCombo, SIGNAL(currentIndexChanged(QString)), MnemonicSeedDialog, SLOT(languageChanged()));

        QMetaObject::connectSlotsByName(MnemonicSeedDialog);
    } // setupUi

    void retranslateUi(QDialog *MnemonicSeedDialog)
    {
        MnemonicSeedDialog->setWindowTitle(QApplication::translate("MnemonicSeedDialog", "Mnemonic seed", Q_NULLPTR));
        m_languageLabel->setText(QApplication::translate("MnemonicSeedDialog", "Select language", Q_NULLPTR));
        ClosePushButton->setText(QApplication::translate("MnemonicSeedDialog", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MnemonicSeedDialog: public Ui_MnemonicSeedDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNEMONICSEEDDIALOG_H
