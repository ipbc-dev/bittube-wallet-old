/********************************************************************************
** Form generated from reading UI file 'addressbookdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOKDIALOG_H
#define UI_ADDRESSBOOKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddressBookDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *m_addressBookView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_okButton;

    void setupUi(QDialog *AddressBookDialog)
    {
        if (AddressBookDialog->objectName().isEmpty())
            AddressBookDialog->setObjectName(QStringLiteral("AddressBookDialog"));
        AddressBookDialog->resize(747, 525);
        verticalLayout = new QVBoxLayout(AddressBookDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_addressBookView = new QTreeView(AddressBookDialog);
        m_addressBookView->setObjectName(QStringLiteral("m_addressBookView"));

        verticalLayout->addWidget(m_addressBookView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_okButton = new QPushButton(AddressBookDialog);
        m_okButton->setObjectName(QStringLiteral("m_okButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/add_recepient"), QSize(), QIcon::Normal, QIcon::Off);
        m_okButton->setIcon(icon);

        horizontalLayout->addWidget(m_okButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AddressBookDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), AddressBookDialog, SLOT(accept()));
        QObject::connect(m_addressBookView, SIGNAL(doubleClicked(QModelIndex)), AddressBookDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(AddressBookDialog);
    } // setupUi

    void retranslateUi(QDialog *AddressBookDialog)
    {
        AddressBookDialog->setWindowTitle(QApplication::translate("AddressBookDialog", "Select address", Q_NULLPTR));
        m_okButton->setText(QApplication::translate("AddressBookDialog", "Choose", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddressBookDialog: public Ui_AddressBookDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSBOOKDIALOG_H
