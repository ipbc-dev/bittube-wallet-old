/********************************************************************************
** Form generated from reading UI file 'changelanguagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGELANGUAGEDIALOG_H
#define UI_CHANGELANGUAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChangeLanguageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *ChangeLangComboBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_cancelButton;
    QPushButton *m_okButton;

    void setupUi(QDialog *ChangeLanguageDialog)
    {
        if (ChangeLanguageDialog->objectName().isEmpty())
            ChangeLanguageDialog->setObjectName(QStringLiteral("ChangeLanguageDialog"));
        ChangeLanguageDialog->resize(245, 92);
        verticalLayout = new QVBoxLayout(ChangeLanguageDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(ChangeLanguageDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        ChangeLangComboBox = new QComboBox(ChangeLanguageDialog);
        ChangeLangComboBox->setObjectName(QStringLiteral("ChangeLangComboBox"));

        horizontalLayout->addWidget(ChangeLangComboBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        m_cancelButton = new QPushButton(ChangeLanguageDialog);
        m_cancelButton->setObjectName(QStringLiteral("m_cancelButton"));

        horizontalLayout_2->addWidget(m_cancelButton);

        m_okButton = new QPushButton(ChangeLanguageDialog);
        m_okButton->setObjectName(QStringLiteral("m_okButton"));

        horizontalLayout_2->addWidget(m_okButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ChangeLanguageDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), ChangeLanguageDialog, SLOT(accept()));
        QObject::connect(m_cancelButton, SIGNAL(clicked()), ChangeLanguageDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ChangeLanguageDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangeLanguageDialog)
    {
        ChangeLanguageDialog->setWindowTitle(QApplication::translate("ChangeLanguageDialog", "Change language", Q_NULLPTR));
        label->setText(QApplication::translate("ChangeLanguageDialog", "Select language:", Q_NULLPTR));
        ChangeLangComboBox->clear();
        ChangeLangComboBox->insertItems(0, QStringList()
         << QApplication::translate("ChangeLanguageDialog", "English", Q_NULLPTR)
         << QApplication::translate("ChangeLanguageDialog", "Deutsch", Q_NULLPTR)
         << QApplication::translate("ChangeLanguageDialog", "Espa\303\261ol", Q_NULLPTR)
        );
        m_cancelButton->setText(QApplication::translate("ChangeLanguageDialog", "Cancel", Q_NULLPTR));
        m_okButton->setText(QApplication::translate("ChangeLanguageDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChangeLanguageDialog: public Ui_ChangeLanguageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGELANGUAGEDIALOG_H
