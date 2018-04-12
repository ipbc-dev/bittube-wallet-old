/********************************************************************************
** Form generated from reading UI file 'restorefrommnemonicseeddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESTOREFROMMNEMONICSEEDDIALOG_H
#define UI_RESTOREFROMMNEMONICSEEDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RestoreFromMnemonicSeedDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QToolButton *m_selectPathButton;
    QLabel *label_2;
    QLineEdit *m_pathEdit;
    QTextEdit *m_seedEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *m_errorLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_cancelButton;
    QPushButton *m_okButton;

    void setupUi(QDialog *RestoreFromMnemonicSeedDialog)
    {
        if (RestoreFromMnemonicSeedDialog->objectName().isEmpty())
            RestoreFromMnemonicSeedDialog->setObjectName(QStringLiteral("RestoreFromMnemonicSeedDialog"));
        RestoreFromMnemonicSeedDialog->resize(647, 140);
        RestoreFromMnemonicSeedDialog->setMinimumSize(QSize(0, 130));
        verticalLayout = new QVBoxLayout(RestoreFromMnemonicSeedDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(RestoreFromMnemonicSeedDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        m_selectPathButton = new QToolButton(RestoreFromMnemonicSeedDialog);
        m_selectPathButton->setObjectName(QStringLiteral("m_selectPathButton"));

        gridLayout->addWidget(m_selectPathButton, 2, 2, 1, 1);

        label_2 = new QLabel(RestoreFromMnemonicSeedDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        m_pathEdit = new QLineEdit(RestoreFromMnemonicSeedDialog);
        m_pathEdit->setObjectName(QStringLiteral("m_pathEdit"));

        gridLayout->addWidget(m_pathEdit, 2, 1, 1, 1);

        m_seedEdit = new QTextEdit(RestoreFromMnemonicSeedDialog);
        m_seedEdit->setObjectName(QStringLiteral("m_seedEdit"));
        m_seedEdit->setReadOnly(false);

        gridLayout->addWidget(m_seedEdit, 0, 1, 1, 2);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_errorLabel = new QLabel(RestoreFromMnemonicSeedDialog);
        m_errorLabel->setObjectName(QStringLiteral("m_errorLabel"));

        horizontalLayout->addWidget(m_errorLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_cancelButton = new QPushButton(RestoreFromMnemonicSeedDialog);
        m_cancelButton->setObjectName(QStringLiteral("m_cancelButton"));
        m_cancelButton->setAutoDefault(false);

        horizontalLayout->addWidget(m_cancelButton);

        m_okButton = new QPushButton(RestoreFromMnemonicSeedDialog);
        m_okButton->setObjectName(QStringLiteral("m_okButton"));
        m_okButton->setAutoDefault(false);

        horizontalLayout->addWidget(m_okButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(RestoreFromMnemonicSeedDialog);
        QObject::connect(m_selectPathButton, SIGNAL(clicked()), RestoreFromMnemonicSeedDialog, SLOT(selectPathClicked()));
        QObject::connect(m_okButton, SIGNAL(clicked()), RestoreFromMnemonicSeedDialog, SLOT(accept()));
        QObject::connect(m_cancelButton, SIGNAL(clicked()), RestoreFromMnemonicSeedDialog, SLOT(reject()));
        QObject::connect(m_seedEdit, SIGNAL(textChanged()), RestoreFromMnemonicSeedDialog, SLOT(onTextChanged()));

        m_okButton->setDefault(true);


        QMetaObject::connectSlotsByName(RestoreFromMnemonicSeedDialog);
    } // setupUi

    void retranslateUi(QDialog *RestoreFromMnemonicSeedDialog)
    {
        RestoreFromMnemonicSeedDialog->setWindowTitle(QApplication::translate("RestoreFromMnemonicSeedDialog", "Restore from mnemonic phrase", Q_NULLPTR));
        label->setText(QApplication::translate("RestoreFromMnemonicSeedDialog", "Mnemonic:", Q_NULLPTR));
        m_selectPathButton->setText(QApplication::translate("RestoreFromMnemonicSeedDialog", "...", Q_NULLPTR));
        label_2->setText(QApplication::translate("RestoreFromMnemonicSeedDialog", "Wallet path:", Q_NULLPTR));
        m_errorLabel->setText(QString());
        m_cancelButton->setText(QApplication::translate("RestoreFromMnemonicSeedDialog", "Cancel", Q_NULLPTR));
        m_okButton->setText(QApplication::translate("RestoreFromMnemonicSeedDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RestoreFromMnemonicSeedDialog: public Ui_RestoreFromMnemonicSeedDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESTOREFROMMNEMONICSEEDDIALOG_H
