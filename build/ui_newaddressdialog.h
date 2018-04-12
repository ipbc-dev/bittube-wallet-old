/********************************************************************************
** Form generated from reading UI file 'newaddressdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWADDRESSDIALOG_H
#define UI_NEWADDRESSDIALOG_H

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
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_NewAddressDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_okButton;
    QPushButton *m_cancelButton;
    QLineEdit *m_contactPaymentIdEdit;
    QLineEdit *m_addressEdit;
    QLineEdit *m_labelEdit;

    void setupUi(QDialog *NewAddressDialog)
    {
        if (NewAddressDialog->objectName().isEmpty())
            NewAddressDialog->setObjectName(QStringLiteral("NewAddressDialog"));
        NewAddressDialog->resize(700, 125);
        gridLayout = new QGridLayout(NewAddressDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(NewAddressDialog);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(NewAddressDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(NewAddressDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(600, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 2);

        m_okButton = new QPushButton(NewAddressDialog);
        m_okButton->setObjectName(QStringLiteral("m_okButton"));
        m_okButton->setEnabled(true);

        gridLayout->addWidget(m_okButton, 3, 2, 1, 1);

        m_cancelButton = new QPushButton(NewAddressDialog);
        m_cancelButton->setObjectName(QStringLiteral("m_cancelButton"));

        gridLayout->addWidget(m_cancelButton, 3, 3, 1, 1);

        m_contactPaymentIdEdit = new QLineEdit(NewAddressDialog);
        m_contactPaymentIdEdit->setObjectName(QStringLiteral("m_contactPaymentIdEdit"));
        m_contactPaymentIdEdit->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(m_contactPaymentIdEdit, 2, 1, 1, 3);

        m_addressEdit = new QLineEdit(NewAddressDialog);
        m_addressEdit->setObjectName(QStringLiteral("m_addressEdit"));
        m_addressEdit->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(m_addressEdit, 1, 1, 1, 3);

        m_labelEdit = new QLineEdit(NewAddressDialog);
        m_labelEdit->setObjectName(QStringLiteral("m_labelEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_labelEdit->sizePolicy().hasHeightForWidth());
        m_labelEdit->setSizePolicy(sizePolicy1);
        m_labelEdit->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(m_labelEdit, 0, 1, 1, 3);

        QWidget::setTabOrder(m_labelEdit, m_addressEdit);
        QWidget::setTabOrder(m_addressEdit, m_contactPaymentIdEdit);
        QWidget::setTabOrder(m_contactPaymentIdEdit, m_okButton);
        QWidget::setTabOrder(m_okButton, m_cancelButton);

        retranslateUi(NewAddressDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), NewAddressDialog, SLOT(accept()));
        QObject::connect(m_cancelButton, SIGNAL(clicked()), NewAddressDialog, SLOT(reject()));

        m_okButton->setDefault(true);


        QMetaObject::connectSlotsByName(NewAddressDialog);
    } // setupUi

    void retranslateUi(QDialog *NewAddressDialog)
    {
        NewAddressDialog->setWindowTitle(QApplication::translate("NewAddressDialog", "New address", Q_NULLPTR));
        label->setText(QApplication::translate("NewAddressDialog", "Label:", Q_NULLPTR));
        label_2->setText(QApplication::translate("NewAddressDialog", "Address:", Q_NULLPTR));
        label_3->setText(QApplication::translate("NewAddressDialog", "PaymentID:", Q_NULLPTR));
        m_okButton->setText(QApplication::translate("NewAddressDialog", "Ok", Q_NULLPTR));
        m_cancelButton->setText(QApplication::translate("NewAddressDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NewAddressDialog: public Ui_NewAddressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWADDRESSDIALOG_H
