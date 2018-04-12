/********************************************************************************
** Form generated from reading UI file 'openuridialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENURIDIALOG_H
#define UI_OPENURIDIALOG_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OpenUriDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *m_uriEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_cancelButton;
    QPushButton *m_okButton;

    void setupUi(QDialog *OpenUriDialog)
    {
        if (OpenUriDialog->objectName().isEmpty())
            OpenUriDialog->setObjectName(QStringLiteral("OpenUriDialog"));
        OpenUriDialog->setWindowModality(Qt::ApplicationModal);
        OpenUriDialog->resize(474, 89);
        verticalLayout = new QVBoxLayout(OpenUriDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(OpenUriDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        m_uriEdit = new QLineEdit(OpenUriDialog);
        m_uriEdit->setObjectName(QStringLiteral("m_uriEdit"));

        horizontalLayout->addWidget(m_uriEdit);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        m_cancelButton = new QPushButton(OpenUriDialog);
        m_cancelButton->setObjectName(QStringLiteral("m_cancelButton"));

        horizontalLayout_2->addWidget(m_cancelButton);

        m_okButton = new QPushButton(OpenUriDialog);
        m_okButton->setObjectName(QStringLiteral("m_okButton"));

        horizontalLayout_2->addWidget(m_okButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(OpenUriDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), OpenUriDialog, SLOT(accept()));
        QObject::connect(m_cancelButton, SIGNAL(clicked()), OpenUriDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OpenUriDialog);
    } // setupUi

    void retranslateUi(QDialog *OpenUriDialog)
    {
        OpenUriDialog->setWindowTitle(QApplication::translate("OpenUriDialog", "Open payment request", Q_NULLPTR));
        label->setText(QApplication::translate("OpenUriDialog", "URI:", Q_NULLPTR));
        m_cancelButton->setText(QApplication::translate("OpenUriDialog", "Cancel", Q_NULLPTR));
        m_okButton->setText(QApplication::translate("OpenUriDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OpenUriDialog: public Ui_OpenUriDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENURIDIALOG_H
