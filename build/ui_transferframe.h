/********************************************************************************
** Form generated from reading UI file 'transferframe.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFERFRAME_H
#define UI_TRANSFERFRAME_H

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
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_TransferFrame
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *m_addressEdit;
    QToolButton *m_addressBookButton;
    QToolButton *m_pasteButton;
    QToolButton *m_removeButton;
    QLabel *label_3;
    QDoubleSpinBox *m_amountSpin;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *m_labelEdit;

    void setupUi(QFrame *TransferFrame)
    {
        if (TransferFrame->objectName().isEmpty())
            TransferFrame->setObjectName(QStringLiteral("TransferFrame"));
        TransferFrame->resize(885, 80);
        TransferFrame->setFrameShape(QFrame::Box);
        TransferFrame->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(TransferFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(TransferFrame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        m_addressEdit = new QLineEdit(TransferFrame);
        m_addressEdit->setObjectName(QStringLiteral("m_addressEdit"));
        m_addressEdit->setClearButtonEnabled(false);

        horizontalLayout_2->addWidget(m_addressEdit);

        m_addressBookButton = new QToolButton(TransferFrame);
        m_addressBookButton->setObjectName(QStringLiteral("m_addressBookButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/add_recepient"), QSize(), QIcon::Normal, QIcon::Off);
        m_addressBookButton->setIcon(icon);

        horizontalLayout_2->addWidget(m_addressBookButton);

        m_pasteButton = new QToolButton(TransferFrame);
        m_pasteButton->setObjectName(QStringLiteral("m_pasteButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/paste"), QSize(), QIcon::Normal, QIcon::Off);
        m_pasteButton->setIcon(icon1);

        horizontalLayout_2->addWidget(m_pasteButton);

        m_removeButton = new QToolButton(TransferFrame);
        m_removeButton->setObjectName(QStringLiteral("m_removeButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        m_removeButton->setIcon(icon2);

        horizontalLayout_2->addWidget(m_removeButton);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 2);

        label_3 = new QLabel(TransferFrame);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        m_amountSpin = new QDoubleSpinBox(TransferFrame);
        m_amountSpin->setObjectName(QStringLiteral("m_amountSpin"));
        QFont font;
        font.setPointSize(12);
        m_amountSpin->setFont(font);
        m_amountSpin->setCursor(QCursor(Qt::IBeamCursor));
        m_amountSpin->setLayoutDirection(Qt::LeftToRight);
        m_amountSpin->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        m_amountSpin->setSuffix(QStringLiteral(""));
        m_amountSpin->setDecimals(12);
        m_amountSpin->setMaximum(1e+7);

        gridLayout->addWidget(m_amountSpin, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(TransferFrame);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        m_labelEdit = new QLineEdit(TransferFrame);
        m_labelEdit->setObjectName(QStringLiteral("m_labelEdit"));
        m_labelEdit->setMaxLength(50);

        horizontalLayout->addWidget(m_labelEdit);


        gridLayout->addLayout(horizontalLayout, 1, 2, 1, 1);

        QWidget::setTabOrder(m_addressEdit, m_amountSpin);
        QWidget::setTabOrder(m_amountSpin, m_labelEdit);
        QWidget::setTabOrder(m_labelEdit, m_addressBookButton);
        QWidget::setTabOrder(m_addressBookButton, m_pasteButton);
        QWidget::setTabOrder(m_pasteButton, m_removeButton);

        retranslateUi(TransferFrame);
        QObject::connect(m_removeButton, SIGNAL(clicked()), TransferFrame, SLOT(close()));
        QObject::connect(m_addressBookButton, SIGNAL(clicked()), TransferFrame, SLOT(addressBookClicked()));
        QObject::connect(m_pasteButton, SIGNAL(clicked()), TransferFrame, SLOT(pasteClicked()));
        QObject::connect(m_amountSpin, SIGNAL(valueChanged(double)), TransferFrame, SLOT(amountValueChange()));
        QObject::connect(m_removeButton, SIGNAL(clicked()), TransferFrame, SLOT(amountValueChange()));
        QObject::connect(m_addressEdit, SIGNAL(textEdited(QString)), TransferFrame, SLOT(addressEdited(QString)));

        QMetaObject::connectSlotsByName(TransferFrame);
    } // setupUi

    void retranslateUi(QFrame *TransferFrame)
    {
        TransferFrame->setWindowTitle(QApplication::translate("TransferFrame", "Frame", Q_NULLPTR));
        label->setText(QApplication::translate("TransferFrame", "Pay To:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_addressBookButton->setToolTip(QApplication::translate("TransferFrame", "Select recipient from Address Book", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        m_addressBookButton->setText(QApplication::translate("TransferFrame", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_pasteButton->setToolTip(QApplication::translate("TransferFrame", "Paste from clipboard", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        m_pasteButton->setText(QApplication::translate("TransferFrame", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_removeButton->setToolTip(QApplication::translate("TransferFrame", "Remove recepient", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        m_removeButton->setText(QApplication::translate("TransferFrame", "...", Q_NULLPTR));
        label_3->setText(QApplication::translate("TransferFrame", "Amount:", Q_NULLPTR));
        label_2->setText(QApplication::translate("TransferFrame", "Save to Contacts as:", Q_NULLPTR));
        m_labelEdit->setPlaceholderText(QApplication::translate("TransferFrame", "Enter a label for this address to add it to your address book", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TransferFrame: public Ui_TransferFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFERFRAME_H
