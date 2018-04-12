/********************************************************************************
** Form generated from reading UI file 'infodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIALOG_H
#define UI_INFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InfoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *m_connections;
    QLabel *label_7;
    QLabel *m_peerList;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *m_height;
    QLabel *label_8;
    QLabel *m_blockTime;
    QLabel *label_3;
    QLabel *m_difficulty;
    QLabel *label_4;
    QLabel *m_txCount;
    QLabel *label_5;
    QLabel *m_txPoolSize;
    QLabel *label_6;
    QLabel *m_altBlocksCount;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_okButton;

    void setupUi(QDialog *InfoDialog)
    {
        if (InfoDialog->objectName().isEmpty())
            InfoDialog->setObjectName(QStringLiteral("InfoDialog"));
        InfoDialog->setWindowModality(Qt::NonModal);
        InfoDialog->resize(541, 343);
        InfoDialog->setSizeGripEnabled(true);
        InfoDialog->setModal(false);
        verticalLayout = new QVBoxLayout(InfoDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(InfoDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        m_connections = new QLabel(groupBox);
        m_connections->setObjectName(QStringLiteral("m_connections"));

        gridLayout->addWidget(m_connections, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        m_peerList = new QLabel(groupBox);
        m_peerList->setObjectName(QStringLiteral("m_peerList"));

        gridLayout->addWidget(m_peerList, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(InfoDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(150, 0));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        m_height = new QLabel(groupBox_2);
        m_height->setObjectName(QStringLiteral("m_height"));

        gridLayout_2->addWidget(m_height, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(150, 0));

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        m_blockTime = new QLabel(groupBox_2);
        m_blockTime->setObjectName(QStringLiteral("m_blockTime"));

        gridLayout_2->addWidget(m_blockTime, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(150, 0));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        m_difficulty = new QLabel(groupBox_2);
        m_difficulty->setObjectName(QStringLiteral("m_difficulty"));

        gridLayout_2->addWidget(m_difficulty, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(150, 0));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        m_txCount = new QLabel(groupBox_2);
        m_txCount->setObjectName(QStringLiteral("m_txCount"));

        gridLayout_2->addWidget(m_txCount, 3, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(150, 0));

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        m_txPoolSize = new QLabel(groupBox_2);
        m_txPoolSize->setObjectName(QStringLiteral("m_txPoolSize"));

        gridLayout_2->addWidget(m_txPoolSize, 4, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(150, 0));

        gridLayout_2->addWidget(label_6, 5, 0, 1, 1);

        m_altBlocksCount = new QLabel(groupBox_2);
        m_altBlocksCount->setObjectName(QStringLiteral("m_altBlocksCount"));

        gridLayout_2->addWidget(m_altBlocksCount, 5, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 82, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        m_okButton = new QPushButton(InfoDialog);
        m_okButton->setObjectName(QStringLiteral("m_okButton"));

        horizontalLayout_2->addWidget(m_okButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(InfoDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), InfoDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(InfoDialog);
    } // setupUi

    void retranslateUi(QDialog *InfoDialog)
    {
        InfoDialog->setWindowTitle(QApplication::translate("InfoDialog", "Information", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("InfoDialog", "Network", Q_NULLPTR));
        label->setText(QApplication::translate("InfoDialog", "Connections", Q_NULLPTR));
        m_connections->setText(QString());
        label_7->setText(QApplication::translate("InfoDialog", "Peer list", Q_NULLPTR));
        m_peerList->setText(QString());
        groupBox_2->setTitle(QApplication::translate("InfoDialog", "Blockchain", Q_NULLPTR));
        label_2->setText(QApplication::translate("InfoDialog", "Height", Q_NULLPTR));
        m_height->setText(QString());
        label_8->setText(QApplication::translate("InfoDialog", "Last block date and time", Q_NULLPTR));
        m_blockTime->setText(QString());
        label_3->setText(QApplication::translate("InfoDialog", "Difficulty", Q_NULLPTR));
        m_difficulty->setText(QString());
        label_4->setText(QApplication::translate("InfoDialog", "Transactions", Q_NULLPTR));
        m_txCount->setText(QString());
        label_5->setText(QApplication::translate("InfoDialog", "Unconfirmed transactions", Q_NULLPTR));
        m_txPoolSize->setText(QString());
        label_6->setText(QApplication::translate("InfoDialog", "Alternative blocks", Q_NULLPTR));
        m_altBlocksCount->setText(QString());
        m_okButton->setText(QApplication::translate("InfoDialog", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InfoDialog: public Ui_InfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
