/********************************************************************************
** Form generated from reading UI file 'privatekeysdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIVATEKEYSDIALOG_H
#define UI_PRIVATEKEYSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PrivateKeysDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *m_privateKeyEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_copyPrivateKeyButton;
    QPushButton *ClosePushButton;

    void setupUi(QDialog *PrivateKeysDialog)
    {
        if (PrivateKeysDialog->objectName().isEmpty())
            PrivateKeysDialog->setObjectName(QStringLiteral("PrivateKeysDialog"));
        PrivateKeysDialog->resize(640, 120);
        PrivateKeysDialog->setMinimumSize(QSize(600, 120));
        PrivateKeysDialog->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/cryptonote"), QSize(), QIcon::Normal, QIcon::Off);
        PrivateKeysDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(PrivateKeysDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_privateKeyEdit = new QTextEdit(PrivateKeysDialog);
        m_privateKeyEdit->setObjectName(QStringLiteral("m_privateKeyEdit"));
        m_privateKeyEdit->setReadOnly(true);

        verticalLayout->addWidget(m_privateKeyEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_copyPrivateKeyButton = new QPushButton(PrivateKeysDialog);
        m_copyPrivateKeyButton->setObjectName(QStringLiteral("m_copyPrivateKeyButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/copy_white"), QSize(), QIcon::Normal, QIcon::Off);
        m_copyPrivateKeyButton->setIcon(icon1);

        horizontalLayout->addWidget(m_copyPrivateKeyButton);

        ClosePushButton = new QPushButton(PrivateKeysDialog);
        ClosePushButton->setObjectName(QStringLiteral("ClosePushButton"));

        horizontalLayout->addWidget(ClosePushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(PrivateKeysDialog);
        QObject::connect(ClosePushButton, SIGNAL(clicked()), PrivateKeysDialog, SLOT(accept()));
        QObject::connect(m_copyPrivateKeyButton, SIGNAL(clicked()), PrivateKeysDialog, SLOT(copyKey()));

        QMetaObject::connectSlotsByName(PrivateKeysDialog);
    } // setupUi

    void retranslateUi(QDialog *PrivateKeysDialog)
    {
        PrivateKeysDialog->setWindowTitle(QApplication::translate("PrivateKeysDialog", "Private Key", Q_NULLPTR));
        m_copyPrivateKeyButton->setText(QApplication::translate("PrivateKeysDialog", "Copy key", Q_NULLPTR));
        ClosePushButton->setText(QApplication::translate("PrivateKeysDialog", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PrivateKeysDialog: public Ui_PrivateKeysDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIVATEKEYSDIALOG_H
