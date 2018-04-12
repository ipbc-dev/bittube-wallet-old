/********************************************************************************
** Form generated from reading UI file 'confirmsenddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMSENDDIALOG_H
#define UI_CONFIRMSENDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfirmSendDialog
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *m_confirmLabel;
    QLabel *m_paymentIdLabel;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_okButton;
    QPushButton *m_cancelButton;

    void setupUi(QDialog *ConfirmSendDialog)
    {
        if (ConfirmSendDialog->objectName().isEmpty())
            ConfirmSendDialog->setObjectName(QStringLiteral("ConfirmSendDialog"));
        ConfirmSendDialog->setWindowModality(Qt::ApplicationModal);
        ConfirmSendDialog->resize(474, 90);
        verticalLayout = new QVBoxLayout(ConfirmSendDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        m_confirmLabel = new QLabel(ConfirmSendDialog);
        m_confirmLabel->setObjectName(QStringLiteral("m_confirmLabel"));
        m_confirmLabel->setTextFormat(Qt::RichText);

        verticalLayout_2->addWidget(m_confirmLabel);

        m_paymentIdLabel = new QLabel(ConfirmSendDialog);
        m_paymentIdLabel->setObjectName(QStringLiteral("m_paymentIdLabel"));
        m_paymentIdLabel->setTextFormat(Qt::RichText);

        verticalLayout_2->addWidget(m_paymentIdLabel);


        verticalLayout->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        m_okButton = new QPushButton(ConfirmSendDialog);
        m_okButton->setObjectName(QStringLiteral("m_okButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/transaction"), QSize(), QIcon::Normal, QIcon::Off);
        m_okButton->setIcon(icon);

        horizontalLayout_2->addWidget(m_okButton);

        m_cancelButton = new QPushButton(ConfirmSendDialog);
        m_cancelButton->setObjectName(QStringLiteral("m_cancelButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/cancel"), QSize(), QIcon::Normal, QIcon::Off);
        m_cancelButton->setIcon(icon1);

        horizontalLayout_2->addWidget(m_cancelButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ConfirmSendDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), ConfirmSendDialog, SLOT(accept()));
        QObject::connect(m_cancelButton, SIGNAL(clicked()), ConfirmSendDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ConfirmSendDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfirmSendDialog)
    {
        ConfirmSendDialog->setWindowTitle(QApplication::translate("ConfirmSendDialog", "Confirm sending %1 IPBC", Q_NULLPTR));
        m_confirmLabel->setText(QApplication::translate("ConfirmSendDialog", "<html><head/><body><p>Are you sure you want to send <strong>%1 IPBC</strong>?</p></body></html>", Q_NULLPTR));
        m_paymentIdLabel->setText(QString());
        m_okButton->setText(QApplication::translate("ConfirmSendDialog", "Yes", Q_NULLPTR));
        m_cancelButton->setText(QApplication::translate("ConfirmSendDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConfirmSendDialog: public Ui_ConfirmSendDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMSENDDIALOG_H
