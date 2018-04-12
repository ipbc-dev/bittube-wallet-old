/********************************************************************************
** Form generated from reading UI file 'showpaymentrequest.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWPAYMENTREQUEST_H
#define UI_SHOWPAYMENTREQUEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include "gui/QRLabel.h"

QT_BEGIN_NAMESPACE

class Ui_ShowPaymentRequestDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    WalletGui::QRLabel *m_requestQRlabel;
    QGroupBox *m_paymentRequestContent;
    QGridLayout *gridLayout;
    QTextEdit *m_paymentRequestUriText;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *m_copyUriButton;
    QPushButton *m_saveUriButton;
    QPushButton *m_saveImageButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_closeButton;

    void setupUi(QDialog *ShowPaymentRequestDialog)
    {
        if (ShowPaymentRequestDialog->objectName().isEmpty())
            ShowPaymentRequestDialog->setObjectName(QStringLiteral("ShowPaymentRequestDialog"));
        ShowPaymentRequestDialog->resize(385, 527);
        ShowPaymentRequestDialog->setMinimumSize(QSize(385, 400));
        ShowPaymentRequestDialog->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(ShowPaymentRequestDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        m_requestQRlabel = new WalletGui::QRLabel(ShowPaymentRequestDialog);
        m_requestQRlabel->setObjectName(QStringLiteral("m_requestQRlabel"));
        m_requestQRlabel->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_requestQRlabel->sizePolicy().hasHeightForWidth());
        m_requestQRlabel->setSizePolicy(sizePolicy);
        m_requestQRlabel->setMinimumSize(QSize(300, 300));
        m_requestQRlabel->setMaximumSize(QSize(300, 300));
        m_requestQRlabel->setBaseSize(QSize(300, 300));
        m_requestQRlabel->setScaledContents(true);

        horizontalLayout_2->addWidget(m_requestQRlabel);


        verticalLayout->addLayout(horizontalLayout_2);

        m_paymentRequestContent = new QGroupBox(ShowPaymentRequestDialog);
        m_paymentRequestContent->setObjectName(QStringLiteral("m_paymentRequestContent"));
        m_paymentRequestContent->setMinimumSize(QSize(0, 150));
        gridLayout = new QGridLayout(m_paymentRequestContent);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        m_paymentRequestUriText = new QTextEdit(m_paymentRequestContent);
        m_paymentRequestUriText->setObjectName(QStringLiteral("m_paymentRequestUriText"));
        m_paymentRequestUriText->setReadOnly(true);

        gridLayout->addWidget(m_paymentRequestUriText, 0, 0, 1, 1);


        verticalLayout->addWidget(m_paymentRequestContent);

        verticalSpacer = new QSpacerItem(20, 94, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_copyUriButton = new QPushButton(ShowPaymentRequestDialog);
        m_copyUriButton->setObjectName(QStringLiteral("m_copyUriButton"));

        horizontalLayout->addWidget(m_copyUriButton);

        m_saveUriButton = new QPushButton(ShowPaymentRequestDialog);
        m_saveUriButton->setObjectName(QStringLiteral("m_saveUriButton"));

        horizontalLayout->addWidget(m_saveUriButton);

        m_saveImageButton = new QPushButton(ShowPaymentRequestDialog);
        m_saveImageButton->setObjectName(QStringLiteral("m_saveImageButton"));

        horizontalLayout->addWidget(m_saveImageButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_closeButton = new QPushButton(ShowPaymentRequestDialog);
        m_closeButton->setObjectName(QStringLiteral("m_closeButton"));

        horizontalLayout->addWidget(m_closeButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ShowPaymentRequestDialog);
        QObject::connect(m_closeButton, SIGNAL(clicked()), ShowPaymentRequestDialog, SLOT(accept()));
        QObject::connect(m_copyUriButton, SIGNAL(clicked()), ShowPaymentRequestDialog, SLOT(copyUri()));
        QObject::connect(m_saveUriButton, SIGNAL(clicked()), ShowPaymentRequestDialog, SLOT(saveUri()));
        QObject::connect(m_saveImageButton, SIGNAL(clicked()), ShowPaymentRequestDialog, SLOT(saveQRcodeToFile()));

        QMetaObject::connectSlotsByName(ShowPaymentRequestDialog);
    } // setupUi

    void retranslateUi(QDialog *ShowPaymentRequestDialog)
    {
        ShowPaymentRequestDialog->setWindowTitle(QApplication::translate("ShowPaymentRequestDialog", "Payment request", Q_NULLPTR));
        m_requestQRlabel->setText(QString());
        m_paymentRequestContent->setTitle(QApplication::translate("ShowPaymentRequestDialog", "Payment information", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        m_paymentRequestUriText->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        m_copyUriButton->setText(QApplication::translate("ShowPaymentRequestDialog", "Copy URI", Q_NULLPTR));
        m_saveUriButton->setText(QApplication::translate("ShowPaymentRequestDialog", "Save URI", Q_NULLPTR));
        m_saveImageButton->setText(QApplication::translate("ShowPaymentRequestDialog", "Save image", Q_NULLPTR));
        m_closeButton->setText(QApplication::translate("ShowPaymentRequestDialog", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShowPaymentRequestDialog: public Ui_ShowPaymentRequestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWPAYMENTREQUEST_H
