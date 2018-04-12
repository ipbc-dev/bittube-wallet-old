/********************************************************************************
** Form generated from reading UI file 'sendframe.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDFRAME_H
#define UI_SENDFRAME_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SendFrame
{
public:
    QVBoxLayout *m_send_frame_main_layout;
    QScrollArea *m_transfersScrollarea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *m_send_frame_layout;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QSlider *m_mixinSlider;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_6;
    QLineEdit *m_mixinEdit;
    QLineEdit *m_paymentIdEdit;
    QDoubleSpinBox *m_feeSpin;
    QPushButton *m_generatePaymentIdButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *m_sendButton;
    QPushButton *m_clearAllButton;
    QPushButton *m_addRecipientButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *m_remote_label;
    QLabel *label_4;
    QLabel *m_balanceLabel;
    QLabel *m_tickerLabel;

    void setupUi(QFrame *SendFrame)
    {
        if (SendFrame->objectName().isEmpty())
            SendFrame->setObjectName(QStringLiteral("SendFrame"));
        SendFrame->resize(866, 590);
        SendFrame->setFrameShape(QFrame::StyledPanel);
        SendFrame->setFrameShadow(QFrame::Raised);
        m_send_frame_main_layout = new QVBoxLayout(SendFrame);
        m_send_frame_main_layout->setObjectName(QStringLiteral("m_send_frame_main_layout"));
        m_transfersScrollarea = new QScrollArea(SendFrame);
        m_transfersScrollarea->setObjectName(QStringLiteral("m_transfersScrollarea"));
        m_transfersScrollarea->setFrameShape(QFrame::NoFrame);
        m_transfersScrollarea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 846, 439));
        m_send_frame_layout = new QVBoxLayout(scrollAreaWidgetContents);
        m_send_frame_layout->setObjectName(QStringLiteral("m_send_frame_layout"));
        m_send_frame_layout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 445, QSizePolicy::Minimum, QSizePolicy::Expanding);

        m_send_frame_layout->addItem(verticalSpacer);

        m_transfersScrollarea->setWidget(scrollAreaWidgetContents);

        m_send_frame_main_layout->addWidget(m_transfersScrollarea);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 5, -1, -1);
        m_mixinSlider = new QSlider(SendFrame);
        m_mixinSlider->setObjectName(QStringLiteral("m_mixinSlider"));
        m_mixinSlider->setMaximumSize(QSize(150, 16777215));
        m_mixinSlider->setBaseSize(QSize(200, 0));
        m_mixinSlider->setMaximum(10);
        m_mixinSlider->setPageStep(1);
        m_mixinSlider->setValue(1);
        m_mixinSlider->setSliderPosition(5);
        m_mixinSlider->setTracking(false);
        m_mixinSlider->setOrientation(Qt::Horizontal);
        m_mixinSlider->setTickPosition(QSlider::TicksBothSides);
        m_mixinSlider->setTickInterval(1);

        gridLayout->addWidget(m_mixinSlider, 5, 1, 1, 1);

        label_2 = new QLabel(SendFrame);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

        label = new QLabel(SendFrame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_6 = new QLabel(SendFrame);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        m_mixinEdit = new QLineEdit(SendFrame);
        m_mixinEdit->setObjectName(QStringLiteral("m_mixinEdit"));
        m_mixinEdit->setMinimumSize(QSize(35, 0));
        m_mixinEdit->setMaximumSize(QSize(30, 16777215));
        m_mixinEdit->setText(QStringLiteral(""));
        m_mixinEdit->setMaxLength(5);
        m_mixinEdit->setAlignment(Qt::AlignCenter);
        m_mixinEdit->setReadOnly(true);

        gridLayout->addWidget(m_mixinEdit, 5, 2, 1, 1);

        m_paymentIdEdit = new QLineEdit(SendFrame);
        m_paymentIdEdit->setObjectName(QStringLiteral("m_paymentIdEdit"));
        m_paymentIdEdit->setMaxLength(64);

        gridLayout->addWidget(m_paymentIdEdit, 3, 1, 1, 3);

        m_feeSpin = new QDoubleSpinBox(SendFrame);
        m_feeSpin->setObjectName(QStringLiteral("m_feeSpin"));
        m_feeSpin->setMinimumSize(QSize(150, 0));
        m_feeSpin->setBaseSize(QSize(150, 0));
        m_feeSpin->setCursor(QCursor(Qt::IBeamCursor));
        m_feeSpin->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        m_feeSpin->setDecimals(12);
        m_feeSpin->setMinimum(0.0001);
        m_feeSpin->setMaximum(1e+15);
        m_feeSpin->setSingleStep(0.0001);
        m_feeSpin->setValue(0.0001);

        gridLayout->addWidget(m_feeSpin, 1, 1, 1, 1);

        m_generatePaymentIdButton = new QPushButton(SendFrame);
        m_generatePaymentIdButton->setObjectName(QStringLiteral("m_generatePaymentIdButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_generatePaymentIdButton->sizePolicy().hasHeightForWidth());
        m_generatePaymentIdButton->setSizePolicy(sizePolicy);
        m_generatePaymentIdButton->setMaximumSize(QSize(200, 16777215));

        gridLayout->addWidget(m_generatePaymentIdButton, 3, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);


        m_send_frame_main_layout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_sendButton = new QPushButton(SendFrame);
        m_sendButton->setObjectName(QStringLiteral("m_sendButton"));
        m_sendButton->setMinimumSize(QSize(100, 0));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/btn-send"), QSize(), QIcon::Normal, QIcon::Off);
        m_sendButton->setIcon(icon);

        horizontalLayout->addWidget(m_sendButton);

        m_clearAllButton = new QPushButton(SendFrame);
        m_clearAllButton->setObjectName(QStringLiteral("m_clearAllButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        m_clearAllButton->setIcon(icon1);

        horizontalLayout->addWidget(m_clearAllButton);

        m_addRecipientButton = new QPushButton(SendFrame);
        m_addRecipientButton->setObjectName(QStringLiteral("m_addRecipientButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/add_recepient"), QSize(), QIcon::Normal, QIcon::Off);
        m_addRecipientButton->setIcon(icon2);

        horizontalLayout->addWidget(m_addRecipientButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        m_remote_label = new QLabel(SendFrame);
        m_remote_label->setObjectName(QStringLiteral("m_remote_label"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        m_remote_label->setFont(font);

        horizontalLayout->addWidget(m_remote_label);

        label_4 = new QLabel(SendFrame);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        m_balanceLabel = new QLabel(SendFrame);
        m_balanceLabel->setObjectName(QStringLiteral("m_balanceLabel"));
        m_balanceLabel->setText(QStringLiteral("0.00 "));

        horizontalLayout->addWidget(m_balanceLabel);

        m_tickerLabel = new QLabel(SendFrame);
        m_tickerLabel->setObjectName(QStringLiteral("m_tickerLabel"));
        m_tickerLabel->setText(QStringLiteral(""));

        horizontalLayout->addWidget(m_tickerLabel);


        m_send_frame_main_layout->addLayout(horizontalLayout);

        QWidget::setTabOrder(m_feeSpin, m_paymentIdEdit);
        QWidget::setTabOrder(m_paymentIdEdit, m_mixinSlider);
        QWidget::setTabOrder(m_mixinSlider, m_mixinEdit);
        QWidget::setTabOrder(m_mixinEdit, m_sendButton);
        QWidget::setTabOrder(m_sendButton, m_clearAllButton);
        QWidget::setTabOrder(m_clearAllButton, m_addRecipientButton);
        QWidget::setTabOrder(m_addRecipientButton, m_transfersScrollarea);

        retranslateUi(SendFrame);
        QObject::connect(m_addRecipientButton, SIGNAL(clicked()), SendFrame, SLOT(addRecipientClicked()));
        QObject::connect(m_clearAllButton, SIGNAL(clicked()), SendFrame, SLOT(clearAllClicked()));
        QObject::connect(m_sendButton, SIGNAL(clicked()), SendFrame, SLOT(sendClicked()));
        QObject::connect(m_mixinSlider, SIGNAL(valueChanged(int)), SendFrame, SLOT(mixinValueChanged(int)));
        QObject::connect(m_generatePaymentIdButton, SIGNAL(clicked()), SendFrame, SLOT(generatePaymentIdClicked()));

        m_sendButton->setDefault(true);


        QMetaObject::connectSlotsByName(SendFrame);
    } // setupUi

    void retranslateUi(QFrame *SendFrame)
    {
        SendFrame->setWindowTitle(QApplication::translate("SendFrame", "Frame", Q_NULLPTR));
        label_2->setText(QApplication::translate("SendFrame", "Anonymity level:", Q_NULLPTR));
        label->setText(QApplication::translate("SendFrame", "Fee:", Q_NULLPTR));
        label_6->setText(QApplication::translate("SendFrame", "PaymentID:", Q_NULLPTR));
        m_paymentIdEdit->setPlaceholderText(QApplication::translate("SendFrame", "Payment identifier issued by payee (exchange, shop or other entity)", Q_NULLPTR));
        m_feeSpin->setSuffix(QString());
        m_generatePaymentIdButton->setText(QApplication::translate("SendFrame", "Generate Payment ID", Q_NULLPTR));
        m_sendButton->setText(QApplication::translate("SendFrame", "Send", Q_NULLPTR));
        m_clearAllButton->setText(QApplication::translate("SendFrame", "Clear All", Q_NULLPTR));
        m_addRecipientButton->setText(QApplication::translate("SendFrame", "Add Recipient", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_remote_label->setToolTip(QApplication::translate("SendFrame", "Wallet is connected through remote node. Additional 0.25% fee will be applied.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        m_remote_label->setText(QApplication::translate("SendFrame", "Remote node mode", Q_NULLPTR));
        label_4->setText(QApplication::translate("SendFrame", "Available balance:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SendFrame: public Ui_SendFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDFRAME_H
