/********************************************************************************
** Form generated from reading UI file 'receiveframe.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVEFRAME_H
#define UI_RECEIVEFRAME_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "gui/QRLabel.h"

QT_BEGIN_NAMESPACE

class Ui_ReceiveFrame
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *m_addressQRFrame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *qrCodeFrame;
    WalletGui::QRLabel *m_qrLabel;
    QSpacerItem *horizontalSpacer_2;
    QFrame *m_requestPaymentFrame;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_7;
    QLineEdit *m_payerLabel;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QDoubleSpinBox *m_requestAmountSpin;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_6;
    QLineEdit *m_requestPaymentIdEdit;
    QPushButton *m_generatePaymentIdButton;
    QPushButton *m_createPaymentRequest;
    QPushButton *m_closePaymentRequestFormButton;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QFrame *m_bottomButtonsFrame;
    QHBoxLayout *horizontalLayout;
    QPushButton *m_copyAddress;
    QPushButton *m_saveQR;
    QPushButton *m_requestPaymentButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QFrame *ReceiveFrame)
    {
        if (ReceiveFrame->objectName().isEmpty())
            ReceiveFrame->setObjectName(QStringLiteral("ReceiveFrame"));
        ReceiveFrame->resize(846, 592);
        ReceiveFrame->setFrameShape(QFrame::StyledPanel);
        ReceiveFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(ReceiveFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_addressQRFrame = new QFrame(ReceiveFrame);
        m_addressQRFrame->setObjectName(QStringLiteral("m_addressQRFrame"));
        m_addressQRFrame->setMinimumSize(QSize(0, 40));
        m_addressQRFrame->setFrameShape(QFrame::NoFrame);
        m_addressQRFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(m_addressQRFrame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        qrCodeFrame = new QHBoxLayout();
        qrCodeFrame->setObjectName(QStringLiteral("qrCodeFrame"));
        m_qrLabel = new WalletGui::QRLabel(m_addressQRFrame);
        m_qrLabel->setObjectName(QStringLiteral("m_qrLabel"));

        qrCodeFrame->addWidget(m_qrLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        qrCodeFrame->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(qrCodeFrame);


        verticalLayout->addWidget(m_addressQRFrame);

        m_requestPaymentFrame = new QFrame(ReceiveFrame);
        m_requestPaymentFrame->setObjectName(QStringLiteral("m_requestPaymentFrame"));
        m_requestPaymentFrame->setMinimumSize(QSize(0, 0));
        verticalLayout_3 = new QVBoxLayout(m_requestPaymentFrame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, -1);
        groupBox = new QGroupBox(m_requestPaymentFrame);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        m_payerLabel = new QLineEdit(groupBox);
        m_payerLabel->setObjectName(QStringLiteral("m_payerLabel"));
        m_payerLabel->setMaxLength(64);

        gridLayout->addWidget(m_payerLabel, 1, 1, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(361, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 3, 1, 4);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        m_requestAmountSpin = new QDoubleSpinBox(groupBox);
        m_requestAmountSpin->setObjectName(QStringLiteral("m_requestAmountSpin"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_requestAmountSpin->sizePolicy().hasHeightForWidth());
        m_requestAmountSpin->setSizePolicy(sizePolicy);
        m_requestAmountSpin->setMinimumSize(QSize(0, 0));
        m_requestAmountSpin->setBaseSize(QSize(150, 0));
        m_requestAmountSpin->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        m_requestAmountSpin->setDecimals(12);
        m_requestAmountSpin->setMinimum(0);
        m_requestAmountSpin->setMaximum(1e+15);
        m_requestAmountSpin->setSingleStep(1);
        m_requestAmountSpin->setValue(0);

        gridLayout->addWidget(m_requestAmountSpin, 2, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(547, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 2, 1, 5);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        m_requestPaymentIdEdit = new QLineEdit(groupBox);
        m_requestPaymentIdEdit->setObjectName(QStringLiteral("m_requestPaymentIdEdit"));
        m_requestPaymentIdEdit->setMaxLength(64);

        gridLayout->addWidget(m_requestPaymentIdEdit, 3, 1, 1, 5);

        m_generatePaymentIdButton = new QPushButton(groupBox);
        m_generatePaymentIdButton->setObjectName(QStringLiteral("m_generatePaymentIdButton"));
        m_generatePaymentIdButton->setMinimumSize(QSize(0, 24));
        m_generatePaymentIdButton->setBaseSize(QSize(0, 24));

        gridLayout->addWidget(m_generatePaymentIdButton, 3, 6, 1, 1);

        m_createPaymentRequest = new QPushButton(groupBox);
        m_createPaymentRequest->setObjectName(QStringLiteral("m_createPaymentRequest"));
        m_createPaymentRequest->setMinimumSize(QSize(0, 24));
        m_createPaymentRequest->setBaseSize(QSize(0, 24));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/btn-receive"), QSize(), QIcon::Normal, QIcon::Off);
        m_createPaymentRequest->setIcon(icon);

        gridLayout->addWidget(m_createPaymentRequest, 4, 6, 1, 1);

        m_closePaymentRequestFormButton = new QPushButton(groupBox);
        m_closePaymentRequestFormButton->setObjectName(QStringLiteral("m_closePaymentRequestFormButton"));
        m_closePaymentRequestFormButton->setMinimumSize(QSize(0, 24));
        m_closePaymentRequestFormButton->setBaseSize(QSize(0, 24));

        gridLayout->addWidget(m_closePaymentRequestFormButton, 4, 5, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(488, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 4, 0, 1, 5);


        verticalLayout_3->addWidget(groupBox);


        verticalLayout->addWidget(m_requestPaymentFrame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        m_bottomButtonsFrame = new QFrame(ReceiveFrame);
        m_bottomButtonsFrame->setObjectName(QStringLiteral("m_bottomButtonsFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_bottomButtonsFrame->sizePolicy().hasHeightForWidth());
        m_bottomButtonsFrame->setSizePolicy(sizePolicy1);
        m_bottomButtonsFrame->setMinimumSize(QSize(0, 29));
        m_bottomButtonsFrame->setFrameShape(QFrame::NoFrame);
        m_bottomButtonsFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(m_bottomButtonsFrame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        m_copyAddress = new QPushButton(m_bottomButtonsFrame);
        m_copyAddress->setObjectName(QStringLiteral("m_copyAddress"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/copy_white"), QSize(), QIcon::Normal, QIcon::Off);
        m_copyAddress->setIcon(icon1);

        horizontalLayout->addWidget(m_copyAddress);

        m_saveQR = new QPushButton(m_bottomButtonsFrame);
        m_saveQR->setObjectName(QStringLiteral("m_saveQR"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/save"), QSize(), QIcon::Normal, QIcon::Off);
        m_saveQR->setIcon(icon2);

        horizontalLayout->addWidget(m_saveQR);

        m_requestPaymentButton = new QPushButton(m_bottomButtonsFrame);
        m_requestPaymentButton->setObjectName(QStringLiteral("m_requestPaymentButton"));
        m_requestPaymentButton->setEnabled(true);
        m_requestPaymentButton->setIcon(icon);

        horizontalLayout->addWidget(m_requestPaymentButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(m_bottomButtonsFrame);

        QWidget::setTabOrder(m_payerLabel, m_requestAmountSpin);
        QWidget::setTabOrder(m_requestAmountSpin, m_requestPaymentIdEdit);
        QWidget::setTabOrder(m_requestPaymentIdEdit, m_generatePaymentIdButton);
        QWidget::setTabOrder(m_generatePaymentIdButton, m_closePaymentRequestFormButton);
        QWidget::setTabOrder(m_closePaymentRequestFormButton, m_createPaymentRequest);

        retranslateUi(ReceiveFrame);
        QObject::connect(m_generatePaymentIdButton, SIGNAL(clicked()), ReceiveFrame, SLOT(generatePaymentIdClicked()));
        QObject::connect(m_copyAddress, SIGNAL(clicked()), ReceiveFrame, SLOT(copyAddress()));
        QObject::connect(m_requestPaymentButton, SIGNAL(clicked()), ReceiveFrame, SLOT(requestPaymentClicked()));
        QObject::connect(m_saveQR, SIGNAL(clicked()), ReceiveFrame, SLOT(saveQRcodeToFile()));
        QObject::connect(m_closePaymentRequestFormButton, SIGNAL(clicked()), ReceiveFrame, SLOT(closePaymentRequestForm()));
        QObject::connect(m_createPaymentRequest, SIGNAL(clicked()), ReceiveFrame, SLOT(createRequestPaymentClicked()));

        m_copyAddress->setDefault(true);


        QMetaObject::connectSlotsByName(ReceiveFrame);
    } // setupUi

    void retranslateUi(QFrame *ReceiveFrame)
    {
        ReceiveFrame->setWindowTitle(QApplication::translate("ReceiveFrame", "Frame", Q_NULLPTR));
        m_qrLabel->setText(QString());
        groupBox->setTitle(QApplication::translate("ReceiveFrame", "Request payment", Q_NULLPTR));
        label->setText(QApplication::translate("ReceiveFrame", "Use this form to request payment.", Q_NULLPTR));
        label_7->setText(QApplication::translate("ReceiveFrame", "Label:", Q_NULLPTR));
        m_payerLabel->setPlaceholderText(QApplication::translate("ReceiveFrame", "Enter desired label for payer's address book", Q_NULLPTR));
        label_3->setText(QApplication::translate("ReceiveFrame", "Amount:", Q_NULLPTR));
        m_requestAmountSpin->setSuffix(QString());
        label_6->setText(QApplication::translate("ReceiveFrame", "PaymentID:", Q_NULLPTR));
        m_requestPaymentIdEdit->setPlaceholderText(QApplication::translate("ReceiveFrame", "Payment identifier which payer should attach to transaction", Q_NULLPTR));
        m_generatePaymentIdButton->setText(QApplication::translate("ReceiveFrame", "Generate Payment ID", Q_NULLPTR));
        m_createPaymentRequest->setText(QApplication::translate("ReceiveFrame", "Create payment request", Q_NULLPTR));
        m_closePaymentRequestFormButton->setText(QApplication::translate("ReceiveFrame", "Close", Q_NULLPTR));
        m_copyAddress->setText(QApplication::translate("ReceiveFrame", "Copy address", Q_NULLPTR));
        m_saveQR->setText(QApplication::translate("ReceiveFrame", "Save QR to file", Q_NULLPTR));
        m_requestPaymentButton->setText(QApplication::translate("ReceiveFrame", "Request payment", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ReceiveFrame: public Ui_ReceiveFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVEFRAME_H
