/********************************************************************************
** Form generated from reading UI file 'newnodedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWNODEDIALOG_H
#define UI_NEWNODEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewNodeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *m_hostEdit;
    QLabel *label_2;
    QSpinBox *m_portSpin;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_cancelButton;
    QPushButton *m_okButton;

    void setupUi(QDialog *NewNodeDialog)
    {
        if (NewNodeDialog->objectName().isEmpty())
            NewNodeDialog->setObjectName(QStringLiteral("NewNodeDialog"));
        NewNodeDialog->setWindowModality(Qt::ApplicationModal);
        NewNodeDialog->resize(474, 92);
        verticalLayout = new QVBoxLayout(NewNodeDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(NewNodeDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        m_hostEdit = new QLineEdit(NewNodeDialog);
        m_hostEdit->setObjectName(QStringLiteral("m_hostEdit"));

        horizontalLayout->addWidget(m_hostEdit);

        label_2 = new QLabel(NewNodeDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        m_portSpin = new QSpinBox(NewNodeDialog);
        m_portSpin->setObjectName(QStringLiteral("m_portSpin"));
        m_portSpin->setMinimum(1);
        m_portSpin->setMaximum(65535);
        m_portSpin->setValue(32348);

        horizontalLayout->addWidget(m_portSpin);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        m_cancelButton = new QPushButton(NewNodeDialog);
        m_cancelButton->setObjectName(QStringLiteral("m_cancelButton"));

        horizontalLayout_2->addWidget(m_cancelButton);

        m_okButton = new QPushButton(NewNodeDialog);
        m_okButton->setObjectName(QStringLiteral("m_okButton"));

        horizontalLayout_2->addWidget(m_okButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(NewNodeDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), NewNodeDialog, SLOT(accept()));
        QObject::connect(m_cancelButton, SIGNAL(clicked()), NewNodeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewNodeDialog);
    } // setupUi

    void retranslateUi(QDialog *NewNodeDialog)
    {
        NewNodeDialog->setWindowTitle(QApplication::translate("NewNodeDialog", "New remote node", Q_NULLPTR));
        label->setText(QApplication::translate("NewNodeDialog", "Host:", Q_NULLPTR));
        label_2->setText(QApplication::translate("NewNodeDialog", "Port:", Q_NULLPTR));
        m_cancelButton->setText(QApplication::translate("NewNodeDialog", "Cancel", Q_NULLPTR));
        m_okButton->setText(QApplication::translate("NewNodeDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NewNodeDialog: public Ui_NewNodeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWNODEDIALOG_H
