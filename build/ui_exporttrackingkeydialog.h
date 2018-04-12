/********************************************************************************
** Form generated from reading UI file 'exporttrackingkeydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTTRACKINGKEYDIALOG_H
#define UI_EXPORTTRACKINGKEYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportTrackingKeyDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *m_trackingKeyEdit;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_saveTrackingKeyButton;
    QPushButton *m_copyTrackingKeyButton;
    QPushButton *ClosePushButton;

    void setupUi(QDialog *ExportTrackingKeyDialog)
    {
        if (ExportTrackingKeyDialog->objectName().isEmpty())
            ExportTrackingKeyDialog->setObjectName(QStringLiteral("ExportTrackingKeyDialog"));
        ExportTrackingKeyDialog->resize(626, 150);
        ExportTrackingKeyDialog->setMinimumSize(QSize(600, 150));
        ExportTrackingKeyDialog->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/cryptonote"), QSize(), QIcon::Normal, QIcon::Off);
        ExportTrackingKeyDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(ExportTrackingKeyDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        m_trackingKeyEdit = new QTextEdit(ExportTrackingKeyDialog);
        m_trackingKeyEdit->setObjectName(QStringLiteral("m_trackingKeyEdit"));
        m_trackingKeyEdit->setReadOnly(true);
        m_trackingKeyEdit->setAcceptRichText(false);

        horizontalLayout_3->addWidget(m_trackingKeyEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        label = new QLabel(ExportTrackingKeyDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_saveTrackingKeyButton = new QPushButton(ExportTrackingKeyDialog);
        m_saveTrackingKeyButton->setObjectName(QStringLiteral("m_saveTrackingKeyButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/save"), QSize(), QIcon::Normal, QIcon::Off);
        m_saveTrackingKeyButton->setIcon(icon1);

        horizontalLayout->addWidget(m_saveTrackingKeyButton);

        m_copyTrackingKeyButton = new QPushButton(ExportTrackingKeyDialog);
        m_copyTrackingKeyButton->setObjectName(QStringLiteral("m_copyTrackingKeyButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/copy_white"), QSize(), QIcon::Normal, QIcon::Off);
        m_copyTrackingKeyButton->setIcon(icon2);

        horizontalLayout->addWidget(m_copyTrackingKeyButton);

        ClosePushButton = new QPushButton(ExportTrackingKeyDialog);
        ClosePushButton->setObjectName(QStringLiteral("ClosePushButton"));

        horizontalLayout->addWidget(ClosePushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ExportTrackingKeyDialog);
        QObject::connect(ClosePushButton, SIGNAL(clicked()), ExportTrackingKeyDialog, SLOT(accept()));
        QObject::connect(m_copyTrackingKeyButton, SIGNAL(clicked()), ExportTrackingKeyDialog, SLOT(copyKey()));
        QObject::connect(m_saveTrackingKeyButton, SIGNAL(clicked()), ExportTrackingKeyDialog, SLOT(saveKeyToFile()));

        QMetaObject::connectSlotsByName(ExportTrackingKeyDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportTrackingKeyDialog)
    {
        ExportTrackingKeyDialog->setWindowTitle(QApplication::translate("ExportTrackingKeyDialog", "Export tracking key", Q_NULLPTR));
        label->setText(QApplication::translate("ExportTrackingKeyDialog", "Tracking key allows to see all incoming transactions of this wallet. It does not allow to spend funds.", Q_NULLPTR));
        m_saveTrackingKeyButton->setText(QApplication::translate("ExportTrackingKeyDialog", "Save to file", Q_NULLPTR));
        m_copyTrackingKeyButton->setText(QApplication::translate("ExportTrackingKeyDialog", "Copy key", Q_NULLPTR));
        ClosePushButton->setText(QApplication::translate("ExportTrackingKeyDialog", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ExportTrackingKeyDialog: public Ui_ExportTrackingKeyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTTRACKINGKEYDIALOG_H
