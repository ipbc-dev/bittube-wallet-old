/********************************************************************************
** Form generated from reading UI file 'importtrackingkeydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTTRACKINGKEYDIALOG_H
#define UI_IMPORTTRACKINGKEYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ImportTrackingKeyDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QToolButton *m_selectPathButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *m_pathEdit;
    QTextEdit *m_keyEdit;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_cancelButton;
    QPushButton *m_okButton;

    void setupUi(QDialog *ImportTrackingKeyDialog)
    {
        if (ImportTrackingKeyDialog->objectName().isEmpty())
            ImportTrackingKeyDialog->setObjectName(QStringLiteral("ImportTrackingKeyDialog"));
        ImportTrackingKeyDialog->resize(647, 173);
        ImportTrackingKeyDialog->setMinimumSize(QSize(0, 150));
        verticalLayout = new QVBoxLayout(ImportTrackingKeyDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        m_selectPathButton = new QToolButton(ImportTrackingKeyDialog);
        m_selectPathButton->setObjectName(QStringLiteral("m_selectPathButton"));

        gridLayout->addWidget(m_selectPathButton, 1, 2, 1, 1);

        label = new QLabel(ImportTrackingKeyDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(ImportTrackingKeyDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        m_pathEdit = new QLineEdit(ImportTrackingKeyDialog);
        m_pathEdit->setObjectName(QStringLiteral("m_pathEdit"));

        gridLayout->addWidget(m_pathEdit, 1, 1, 1, 1);

        m_keyEdit = new QTextEdit(ImportTrackingKeyDialog);
        m_keyEdit->setObjectName(QStringLiteral("m_keyEdit"));

        gridLayout->addWidget(m_keyEdit, 0, 1, 1, 2);


        verticalLayout->addLayout(gridLayout);

        label_3 = new QLabel(ImportTrackingKeyDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_cancelButton = new QPushButton(ImportTrackingKeyDialog);
        m_cancelButton->setObjectName(QStringLiteral("m_cancelButton"));
        m_cancelButton->setAutoDefault(false);

        horizontalLayout->addWidget(m_cancelButton);

        m_okButton = new QPushButton(ImportTrackingKeyDialog);
        m_okButton->setObjectName(QStringLiteral("m_okButton"));
        m_okButton->setAutoDefault(false);

        horizontalLayout->addWidget(m_okButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ImportTrackingKeyDialog);
        QObject::connect(m_selectPathButton, SIGNAL(clicked()), ImportTrackingKeyDialog, SLOT(selectPathClicked()));
        QObject::connect(m_okButton, SIGNAL(clicked()), ImportTrackingKeyDialog, SLOT(accept()));
        QObject::connect(m_cancelButton, SIGNAL(clicked()), ImportTrackingKeyDialog, SLOT(reject()));

        m_okButton->setDefault(true);


        QMetaObject::connectSlotsByName(ImportTrackingKeyDialog);
    } // setupUi

    void retranslateUi(QDialog *ImportTrackingKeyDialog)
    {
        ImportTrackingKeyDialog->setWindowTitle(QApplication::translate("ImportTrackingKeyDialog", "Import tracking key", Q_NULLPTR));
        m_selectPathButton->setText(QApplication::translate("ImportTrackingKeyDialog", "...", Q_NULLPTR));
        label->setText(QApplication::translate("ImportTrackingKeyDialog", "Key:", Q_NULLPTR));
        label_2->setText(QApplication::translate("ImportTrackingKeyDialog", "Wallet path:", Q_NULLPTR));
        label_3->setText(QApplication::translate("ImportTrackingKeyDialog", "Import a tracking key of a wallet to see all its incoming transactions. It doesn't allow spending funds.", Q_NULLPTR));
        m_cancelButton->setText(QApplication::translate("ImportTrackingKeyDialog", "Cancel", Q_NULLPTR));
        m_okButton->setText(QApplication::translate("ImportTrackingKeyDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ImportTrackingKeyDialog: public Ui_ImportTrackingKeyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTTRACKINGKEYDIALOG_H
