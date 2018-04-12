/********************************************************************************
** Form generated from reading UI file 'newpassworddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPASSWORDDIALOG_H
#define UI_NEWPASSWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NewPasswordDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *m_okButton;
    QPushButton *m_cancelButton;
    QLabel *label;
    QLineEdit *m_passwordEdit;
    QLineEdit *m_passwordConfirmationEdit;
    QLabel *label_2;
    QLabel *m_errorLabel;

    void setupUi(QDialog *NewPasswordDialog)
    {
        if (NewPasswordDialog->objectName().isEmpty())
            NewPasswordDialog->setObjectName(QStringLiteral("NewPasswordDialog"));
        NewPasswordDialog->resize(338, 133);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NewPasswordDialog->sizePolicy().hasHeightForWidth());
        NewPasswordDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(NewPasswordDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        m_okButton = new QPushButton(NewPasswordDialog);
        m_okButton->setObjectName(QStringLiteral("m_okButton"));
        m_okButton->setEnabled(false);

        gridLayout->addWidget(m_okButton, 3, 1, 1, 1);

        m_cancelButton = new QPushButton(NewPasswordDialog);
        m_cancelButton->setObjectName(QStringLiteral("m_cancelButton"));

        gridLayout->addWidget(m_cancelButton, 3, 2, 1, 1);

        label = new QLabel(NewPasswordDialog);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        m_passwordEdit = new QLineEdit(NewPasswordDialog);
        m_passwordEdit->setObjectName(QStringLiteral("m_passwordEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_passwordEdit->sizePolicy().hasHeightForWidth());
        m_passwordEdit->setSizePolicy(sizePolicy2);
        m_passwordEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(m_passwordEdit, 0, 1, 1, 2);

        m_passwordConfirmationEdit = new QLineEdit(NewPasswordDialog);
        m_passwordConfirmationEdit->setObjectName(QStringLiteral("m_passwordConfirmationEdit"));
        m_passwordConfirmationEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(m_passwordConfirmationEdit, 1, 1, 1, 2);

        label_2 = new QLabel(NewPasswordDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        m_errorLabel = new QLabel(NewPasswordDialog);
        m_errorLabel->setObjectName(QStringLiteral("m_errorLabel"));
        m_errorLabel->setStyleSheet(QStringLiteral("color: #ff0000; font: 11px;"));
        m_errorLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_errorLabel, 2, 0, 1, 3);

        QWidget::setTabOrder(m_passwordEdit, m_passwordConfirmationEdit);
        QWidget::setTabOrder(m_passwordConfirmationEdit, m_okButton);
        QWidget::setTabOrder(m_okButton, m_cancelButton);

        retranslateUi(NewPasswordDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), NewPasswordDialog, SLOT(accept()));
        QObject::connect(m_cancelButton, SIGNAL(clicked()), NewPasswordDialog, SLOT(reject()));
        QObject::connect(m_passwordEdit, SIGNAL(textChanged(QString)), NewPasswordDialog, SLOT(checkPassword(QString)));
        QObject::connect(m_passwordConfirmationEdit, SIGNAL(textChanged(QString)), NewPasswordDialog, SLOT(checkPassword(QString)));

        m_okButton->setDefault(true);


        QMetaObject::connectSlotsByName(NewPasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *NewPasswordDialog)
    {
        NewPasswordDialog->setWindowTitle(QApplication::translate("NewPasswordDialog", "Enter password", Q_NULLPTR));
        m_okButton->setText(QApplication::translate("NewPasswordDialog", "Ok", Q_NULLPTR));
        m_cancelButton->setText(QApplication::translate("NewPasswordDialog", "Cancel", Q_NULLPTR));
        label->setText(QApplication::translate("NewPasswordDialog", "Password:", Q_NULLPTR));
        label_2->setText(QApplication::translate("NewPasswordDialog", "Confirm:", Q_NULLPTR));
        m_errorLabel->setText(QApplication::translate("NewPasswordDialog", "Password not confirmed", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NewPasswordDialog: public Ui_NewPasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPASSWORDDIALOG_H
