/********************************************************************************
** Form generated from reading UI file 'verifymnemonicseeddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERIFYMNEMONICSEEDDIALOG_H
#define UI_VERIFYMNEMONICSEEDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_VerifyMnemonicSeedDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label;
    QTextEdit *m_seedEdit;
    QLabel *label_2;
    QTextEdit *m_seedRepeat;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *m_languageLabel;
    QComboBox *m_languageCombo;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_okButton;

    void setupUi(QDialog *VerifyMnemonicSeedDialog)
    {
        if (VerifyMnemonicSeedDialog->objectName().isEmpty())
            VerifyMnemonicSeedDialog->setObjectName(QStringLiteral("VerifyMnemonicSeedDialog"));
        VerifyMnemonicSeedDialog->resize(647, 231);
        VerifyMnemonicSeedDialog->setMinimumSize(QSize(0, 130));
        gridLayout = new QGridLayout(VerifyMnemonicSeedDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(VerifyMnemonicSeedDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 2);

        label = new QLabel(VerifyMnemonicSeedDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        m_seedEdit = new QTextEdit(VerifyMnemonicSeedDialog);
        m_seedEdit->setObjectName(QStringLiteral("m_seedEdit"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        m_seedEdit->setFont(font);
        m_seedEdit->setReadOnly(true);

        gridLayout->addWidget(m_seedEdit, 1, 1, 1, 1);

        label_2 = new QLabel(VerifyMnemonicSeedDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        m_seedRepeat = new QTextEdit(VerifyMnemonicSeedDialog);
        m_seedRepeat->setObjectName(QStringLiteral("m_seedRepeat"));
        m_seedRepeat->setFont(font);

        gridLayout->addWidget(m_seedRepeat, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_languageLabel = new QLabel(VerifyMnemonicSeedDialog);
        m_languageLabel->setObjectName(QStringLiteral("m_languageLabel"));

        horizontalLayout->addWidget(m_languageLabel);

        m_languageCombo = new QComboBox(VerifyMnemonicSeedDialog);
        m_languageCombo->setObjectName(QStringLiteral("m_languageCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_languageCombo->sizePolicy().hasHeightForWidth());
        m_languageCombo->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(m_languageCombo);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_okButton = new QPushButton(VerifyMnemonicSeedDialog);
        m_okButton->setObjectName(QStringLiteral("m_okButton"));
        m_okButton->setEnabled(false);
        m_okButton->setAutoDefault(false);

        horizontalLayout->addWidget(m_okButton);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 2);


        retranslateUi(VerifyMnemonicSeedDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), VerifyMnemonicSeedDialog, SLOT(accept()));
        QObject::connect(m_seedRepeat, SIGNAL(textChanged()), VerifyMnemonicSeedDialog, SLOT(onTextChanged()));
        QObject::connect(m_languageCombo, SIGNAL(currentIndexChanged(QString)), VerifyMnemonicSeedDialog, SLOT(languageChanged()));

        m_okButton->setDefault(true);


        QMetaObject::connectSlotsByName(VerifyMnemonicSeedDialog);
    } // setupUi

    void retranslateUi(QDialog *VerifyMnemonicSeedDialog)
    {
        VerifyMnemonicSeedDialog->setWindowTitle(QApplication::translate("VerifyMnemonicSeedDialog", "New deterministic wallet created", Q_NULLPTR));
        label_3->setText(QApplication::translate("VerifyMnemonicSeedDialog", "This is mnemonic seed of your wallet. Write it down carefully. It allows to restore your wallet.", Q_NULLPTR));
        label->setText(QApplication::translate("VerifyMnemonicSeedDialog", "Mnemonic:", Q_NULLPTR));
        label_2->setText(QApplication::translate("VerifyMnemonicSeedDialog", "Repeat:", Q_NULLPTR));
        m_languageLabel->setText(QApplication::translate("VerifyMnemonicSeedDialog", "Select language", Q_NULLPTR));
        m_okButton->setText(QApplication::translate("VerifyMnemonicSeedDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VerifyMnemonicSeedDialog: public Ui_VerifyMnemonicSeedDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFYMNEMONICSEEDDIALOG_H
