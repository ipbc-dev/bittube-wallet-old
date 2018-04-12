/********************************************************************************
** Form generated from reading UI file 'newpooldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPOOLDIALOG_H
#define UI_NEWPOOLDIALOG_H

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

class Ui_NewPoolDialog
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

    void setupUi(QDialog *NewPoolDialog)
    {
        if (NewPoolDialog->objectName().isEmpty())
            NewPoolDialog->setObjectName(QStringLiteral("NewPoolDialog"));
        NewPoolDialog->resize(474, 92);
        verticalLayout = new QVBoxLayout(NewPoolDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(NewPoolDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        m_hostEdit = new QLineEdit(NewPoolDialog);
        m_hostEdit->setObjectName(QStringLiteral("m_hostEdit"));

        horizontalLayout->addWidget(m_hostEdit);

        label_2 = new QLabel(NewPoolDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        m_portSpin = new QSpinBox(NewPoolDialog);
        m_portSpin->setObjectName(QStringLiteral("m_portSpin"));
        m_portSpin->setMinimum(1);
        m_portSpin->setMaximum(65535);

        horizontalLayout->addWidget(m_portSpin);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        m_cancelButton = new QPushButton(NewPoolDialog);
        m_cancelButton->setObjectName(QStringLiteral("m_cancelButton"));

        horizontalLayout_2->addWidget(m_cancelButton);

        m_okButton = new QPushButton(NewPoolDialog);
        m_okButton->setObjectName(QStringLiteral("m_okButton"));
        m_okButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(m_okButton);


        verticalLayout->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(m_hostEdit, m_portSpin);
        QWidget::setTabOrder(m_portSpin, m_cancelButton);
        QWidget::setTabOrder(m_cancelButton, m_okButton);

        retranslateUi(NewPoolDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), NewPoolDialog, SLOT(accept()));
        QObject::connect(m_cancelButton, SIGNAL(clicked()), NewPoolDialog, SLOT(reject()));

        m_okButton->setDefault(true);


        QMetaObject::connectSlotsByName(NewPoolDialog);
    } // setupUi

    void retranslateUi(QDialog *NewPoolDialog)
    {
        NewPoolDialog->setWindowTitle(QApplication::translate("NewPoolDialog", "New pool", Q_NULLPTR));
        label->setText(QApplication::translate("NewPoolDialog", "Host:", Q_NULLPTR));
        label_2->setText(QApplication::translate("NewPoolDialog", "Port:", Q_NULLPTR));
        m_cancelButton->setText(QApplication::translate("NewPoolDialog", "Cancel", Q_NULLPTR));
        m_okButton->setText(QApplication::translate("NewPoolDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NewPoolDialog: public Ui_NewPoolDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPOOLDIALOG_H
