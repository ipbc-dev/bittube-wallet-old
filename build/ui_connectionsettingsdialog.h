/********************************************************************************
** Form generated from reading UI file 'connectionsettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONSETTINGSDIALOG_H
#define UI_CONNECTIONSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ConnectionSettingsDialog
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *connectionCancelButton;
    QPushButton *connectionSaveButton;
    QGridLayout *gridLayout;
    QRadioButton *radioButton_1;
    QLabel *label;
    QRadioButton *radioButton_2;
    QLabel *label_2;
    QRadioButton *radioButton_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpinBox *m_localDaemonPort;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QRadioButton *radioButton_4;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *remoteNodesComboBox;
    QPushButton *addNodeButton;
    QPushButton *removeNodeButton;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ConnectionSettingsDialog)
    {
        if (ConnectionSettingsDialog->objectName().isEmpty())
            ConnectionSettingsDialog->setObjectName(QStringLiteral("ConnectionSettingsDialog"));
        ConnectionSettingsDialog->setWindowModality(Qt::ApplicationModal);
        ConnectionSettingsDialog->resize(600, 388);
        gridLayout_2 = new QGridLayout(ConnectionSettingsDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        connectionCancelButton = new QPushButton(ConnectionSettingsDialog);
        connectionCancelButton->setObjectName(QStringLiteral("connectionCancelButton"));

        horizontalLayout->addWidget(connectionCancelButton);

        connectionSaveButton = new QPushButton(ConnectionSettingsDialog);
        connectionSaveButton->setObjectName(QStringLiteral("connectionSaveButton"));

        horizontalLayout->addWidget(connectionSaveButton);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setVerticalSpacing(10);
        radioButton_1 = new QRadioButton(ConnectionSettingsDialog);
        radioButton_1->setObjectName(QStringLiteral("radioButton_1"));
        radioButton_1->setEnabled(true);
        radioButton_1->setChecked(true);

        gridLayout->addWidget(radioButton_1, 0, 0, 1, 1);

        label = new QLabel(ConnectionSettingsDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(false);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 1, 0, 1, 2);

        radioButton_2 = new QRadioButton(ConnectionSettingsDialog);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        gridLayout->addWidget(radioButton_2, 2, 0, 1, 1);

        label_2 = new QLabel(ConnectionSettingsDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(false);
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 3, 0, 1, 2);

        radioButton_3 = new QRadioButton(ConnectionSettingsDialog);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        gridLayout->addWidget(radioButton_3, 4, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(ConnectionSettingsDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        m_localDaemonPort = new QSpinBox(ConnectionSettingsDialog);
        m_localDaemonPort->setObjectName(QStringLiteral("m_localDaemonPort"));
        m_localDaemonPort->setMinimum(0);
        m_localDaemonPort->setMaximum(65535);
        m_localDaemonPort->setValue(32348);
        m_localDaemonPort->setDisplayIntegerBase(10);

        horizontalLayout_2->addWidget(m_localDaemonPort);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 4, 1, 1, 1);

        label_4 = new QLabel(ConnectionSettingsDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(false);
        label_4->setWordWrap(true);

        gridLayout->addWidget(label_4, 5, 0, 1, 2);

        radioButton_4 = new QRadioButton(ConnectionSettingsDialog);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        gridLayout->addWidget(radioButton_4, 6, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        remoteNodesComboBox = new QComboBox(ConnectionSettingsDialog);
        remoteNodesComboBox->setObjectName(QStringLiteral("remoteNodesComboBox"));
        remoteNodesComboBox->setMinimumSize(QSize(200, 0));
        remoteNodesComboBox->setEditable(false);
        remoteNodesComboBox->setInsertPolicy(QComboBox::InsertAtTop);

        horizontalLayout_3->addWidget(remoteNodesComboBox);

        addNodeButton = new QPushButton(ConnectionSettingsDialog);
        addNodeButton->setObjectName(QStringLiteral("addNodeButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/add"), QSize(), QIcon::Normal, QIcon::Off);
        addNodeButton->setIcon(icon);

        horizontalLayout_3->addWidget(addNodeButton);

        removeNodeButton = new QPushButton(ConnectionSettingsDialog);
        removeNodeButton->setObjectName(QStringLiteral("removeNodeButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        removeNodeButton->setIcon(icon1);

        horizontalLayout_3->addWidget(removeNodeButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_3, 6, 1, 1, 1);

        label_5 = new QLabel(ConnectionSettingsDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(0, 40));
        label_5->setWordWrap(true);

        gridLayout->addWidget(label_5, 7, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(ConnectionSettingsDialog);
        QObject::connect(connectionCancelButton, SIGNAL(clicked()), ConnectionSettingsDialog, SLOT(reject()));
        QObject::connect(connectionSaveButton, SIGNAL(clicked()), ConnectionSettingsDialog, SLOT(accept()));
        QObject::connect(addNodeButton, SIGNAL(clicked()), ConnectionSettingsDialog, SLOT(addNodeClicked()));
        QObject::connect(removeNodeButton, SIGNAL(clicked()), ConnectionSettingsDialog, SLOT(removeNodeClicked()));

        QMetaObject::connectSlotsByName(ConnectionSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *ConnectionSettingsDialog)
    {
        ConnectionSettingsDialog->setWindowTitle(QApplication::translate("ConnectionSettingsDialog", "Connection settings", Q_NULLPTR));
        connectionCancelButton->setText(QApplication::translate("ConnectionSettingsDialog", "Cancel", Q_NULLPTR));
        connectionSaveButton->setText(QApplication::translate("ConnectionSettingsDialog", "Save", Q_NULLPTR));
        radioButton_1->setText(QApplication::translate("ConnectionSettingsDialog", "Auto selection", Q_NULLPTR));
        label->setText(QApplication::translate("ConnectionSettingsDialog", "Wallet will connect to local daemon on default port. In case of no local daemon running it will launch built-in node.", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("ConnectionSettingsDialog", "Embedded", Q_NULLPTR));
        label_2->setText(QApplication::translate("ConnectionSettingsDialog", "Built-in embedded node will be used.", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("ConnectionSettingsDialog", "Local daemon", Q_NULLPTR));
        label_3->setText(QApplication::translate("ConnectionSettingsDialog", "Port: ", Q_NULLPTR));
        label_4->setText(QApplication::translate("ConnectionSettingsDialog", "Wallet will connect to local daemon on specified port.", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("ConnectionSettingsDialog", "Remote daemon", Q_NULLPTR));
        addNodeButton->setText(QApplication::translate("ConnectionSettingsDialog", "Add node", Q_NULLPTR));
        removeNodeButton->setText(QApplication::translate("ConnectionSettingsDialog", "Remove node", Q_NULLPTR));
        label_5->setText(QApplication::translate("ConnectionSettingsDialog", "Wallet will connect to remote node running in local or global network. Please select node or specify IP address or domain name and port. In this mode wallet sends 0.25% fee from each transaction to the node, but no more than 10 IPBC.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConnectionSettingsDialog: public Ui_ConnectionSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONSETTINGSDIALOG_H
