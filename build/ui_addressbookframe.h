/********************************************************************************
** Form generated from reading UI file 'addressbookframe.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOKFRAME_H
#define UI_ADDRESSBOOKFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddressBookFrame
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *m_addressBookView;
    QHBoxLayout *horizontalLayout;
    QPushButton *m_addAddressButton;
    QPushButton *m_editAddressButton;
    QPushButton *m_deleteAddressButton;
    QPushButton *m_copyAddressButton;
    QPushButton *m_copyPaymentIdButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QFrame *AddressBookFrame)
    {
        if (AddressBookFrame->objectName().isEmpty())
            AddressBookFrame->setObjectName(QStringLiteral("AddressBookFrame"));
        AddressBookFrame->resize(874, 585);
        AddressBookFrame->setFrameShape(QFrame::StyledPanel);
        AddressBookFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(AddressBookFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_addressBookView = new QTreeView(AddressBookFrame);
        m_addressBookView->setObjectName(QStringLiteral("m_addressBookView"));
        m_addressBookView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        m_addressBookView->setAlternatingRowColors(true);
        m_addressBookView->setSortingEnabled(false);
        m_addressBookView->header()->setDefaultSectionSize(150);
        m_addressBookView->header()->setStretchLastSection(false);

        verticalLayout->addWidget(m_addressBookView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_addAddressButton = new QPushButton(AddressBookFrame);
        m_addAddressButton->setObjectName(QStringLiteral("m_addAddressButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/add_recepient"), QSize(), QIcon::Normal, QIcon::Off);
        m_addAddressButton->setIcon(icon);

        horizontalLayout->addWidget(m_addAddressButton);

        m_editAddressButton = new QPushButton(AddressBookFrame);
        m_editAddressButton->setObjectName(QStringLiteral("m_editAddressButton"));
        m_editAddressButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/edit"), QSize(), QIcon::Normal, QIcon::Off);
        m_editAddressButton->setIcon(icon1);

        horizontalLayout->addWidget(m_editAddressButton);

        m_deleteAddressButton = new QPushButton(AddressBookFrame);
        m_deleteAddressButton->setObjectName(QStringLiteral("m_deleteAddressButton"));
        m_deleteAddressButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        m_deleteAddressButton->setIcon(icon2);

        horizontalLayout->addWidget(m_deleteAddressButton);

        m_copyAddressButton = new QPushButton(AddressBookFrame);
        m_copyAddressButton->setObjectName(QStringLiteral("m_copyAddressButton"));
        m_copyAddressButton->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/copy_white"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QStringLiteral(":/icons/copy_white"), QSize(), QIcon::Selected, QIcon::Off);
        m_copyAddressButton->setIcon(icon3);

        horizontalLayout->addWidget(m_copyAddressButton);

        m_copyPaymentIdButton = new QPushButton(AddressBookFrame);
        m_copyPaymentIdButton->setObjectName(QStringLiteral("m_copyPaymentIdButton"));
        m_copyPaymentIdButton->setEnabled(false);
        m_copyPaymentIdButton->setIcon(icon3);

        horizontalLayout->addWidget(m_copyPaymentIdButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AddressBookFrame);
        QObject::connect(m_addAddressButton, SIGNAL(clicked()), AddressBookFrame, SLOT(addClicked()));
        QObject::connect(m_deleteAddressButton, SIGNAL(clicked()), AddressBookFrame, SLOT(deleteClicked()));
        QObject::connect(m_copyAddressButton, SIGNAL(clicked()), AddressBookFrame, SLOT(copyClicked()));
        QObject::connect(m_editAddressButton, SIGNAL(clicked()), AddressBookFrame, SLOT(editClicked()));
        QObject::connect(m_copyPaymentIdButton, SIGNAL(clicked()), AddressBookFrame, SLOT(copyPaymentIdClicked()));

        QMetaObject::connectSlotsByName(AddressBookFrame);
    } // setupUi

    void retranslateUi(QFrame *AddressBookFrame)
    {
        AddressBookFrame->setWindowTitle(QApplication::translate("AddressBookFrame", "Frame", Q_NULLPTR));
        m_addAddressButton->setText(QApplication::translate("AddressBookFrame", "New contact", Q_NULLPTR));
        m_editAddressButton->setText(QApplication::translate("AddressBookFrame", "Edit contact", Q_NULLPTR));
        m_deleteAddressButton->setText(QApplication::translate("AddressBookFrame", "Delete contact", Q_NULLPTR));
        m_copyAddressButton->setText(QApplication::translate("AddressBookFrame", "Copy address", Q_NULLPTR));
        m_copyPaymentIdButton->setText(QApplication::translate("AddressBookFrame", "Copy Payment ID", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddressBookFrame: public Ui_AddressBookFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSBOOKFRAME_H
