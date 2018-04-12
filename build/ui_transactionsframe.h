/********************************************************************************
** Form generated from reading UI file 'transactionsframe.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONSFRAME_H
#define UI_TRANSACTIONSFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_TransactionsFrame
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *m_dateSelect;
    QHBoxLayout *m_dateRangeArea;
    QComboBox *m_typeSelect;
    QLineEdit *m_searchFor;
    QToolButton *m_clearAllButton;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *m_selectedAmountLabel;
    QLabel *m_selectedAmount;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *m_csvButton;
    QTreeView *m_transactionsView;

    void setupUi(QFrame *TransactionsFrame)
    {
        if (TransactionsFrame->objectName().isEmpty())
            TransactionsFrame->setObjectName(QStringLiteral("TransactionsFrame"));
        TransactionsFrame->resize(830, 614);
        TransactionsFrame->setFrameShape(QFrame::StyledPanel);
        TransactionsFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(TransactionsFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        m_dateSelect = new QComboBox(TransactionsFrame);
        m_dateSelect->setObjectName(QStringLiteral("m_dateSelect"));
        m_dateSelect->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(m_dateSelect);

        m_dateRangeArea = new QHBoxLayout();
        m_dateRangeArea->setObjectName(QStringLiteral("m_dateRangeArea"));

        horizontalLayout_2->addLayout(m_dateRangeArea);

        m_typeSelect = new QComboBox(TransactionsFrame);
        m_typeSelect->setObjectName(QStringLiteral("m_typeSelect"));
        m_typeSelect->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(m_typeSelect);

        m_searchFor = new QLineEdit(TransactionsFrame);
        m_searchFor->setObjectName(QStringLiteral("m_searchFor"));

        horizontalLayout_2->addWidget(m_searchFor);

        m_clearAllButton = new QToolButton(TransactionsFrame);
        m_clearAllButton->setObjectName(QStringLiteral("m_clearAllButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        m_clearAllButton->setIcon(icon);

        horizontalLayout_2->addWidget(m_clearAllButton);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_selectedAmountLabel = new QLabel(TransactionsFrame);
        m_selectedAmountLabel->setObjectName(QStringLiteral("m_selectedAmountLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_selectedAmountLabel->sizePolicy().hasHeightForWidth());
        m_selectedAmountLabel->setSizePolicy(sizePolicy);
        m_selectedAmountLabel->setMinimumSize(QSize(0, 24));
        m_selectedAmountLabel->setMaximumSize(QSize(16777215, 24));
        m_selectedAmountLabel->setBaseSize(QSize(0, 24));

        horizontalLayout->addWidget(m_selectedAmountLabel);

        m_selectedAmount = new QLabel(TransactionsFrame);
        m_selectedAmount->setObjectName(QStringLiteral("m_selectedAmount"));
        sizePolicy.setHeightForWidth(m_selectedAmount->sizePolicy().hasHeightForWidth());
        m_selectedAmount->setSizePolicy(sizePolicy);
        m_selectedAmount->setMinimumSize(QSize(0, 24));
        m_selectedAmount->setMaximumSize(QSize(16777215, 24));
        m_selectedAmount->setBaseSize(QSize(0, 24));
        m_selectedAmount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(m_selectedAmount);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        m_csvButton = new QPushButton(TransactionsFrame);
        m_csvButton->setObjectName(QStringLiteral("m_csvButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/export"), QSize(), QIcon::Normal, QIcon::Off);
        m_csvButton->setIcon(icon1);

        horizontalLayout->addWidget(m_csvButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        m_transactionsView = new QTreeView(TransactionsFrame);
        m_transactionsView->setObjectName(QStringLiteral("m_transactionsView"));
        m_transactionsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        m_transactionsView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::CurrentChanged|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        m_transactionsView->setAlternatingRowColors(true);
        m_transactionsView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        m_transactionsView->setRootIsDecorated(false);
        m_transactionsView->setUniformRowHeights(true);
        m_transactionsView->setItemsExpandable(false);
        m_transactionsView->setSortingEnabled(false);
        m_transactionsView->header()->setCascadingSectionResizes(true);
        m_transactionsView->header()->setProperty("showSortIndicator", QVariant(false));

        gridLayout->addWidget(m_transactionsView, 1, 0, 1, 1);


        retranslateUi(TransactionsFrame);
        QObject::connect(m_csvButton, SIGNAL(clicked()), TransactionsFrame, SLOT(exportToCsv()));
        QObject::connect(m_transactionsView, SIGNAL(doubleClicked(QModelIndex)), TransactionsFrame, SLOT(showTransactionDetails(QModelIndex)));
        QObject::connect(m_clearAllButton, SIGNAL(clicked()), TransactionsFrame, SLOT(resetFilterClicked()));

        QMetaObject::connectSlotsByName(TransactionsFrame);
    } // setupUi

    void retranslateUi(QFrame *TransactionsFrame)
    {
        TransactionsFrame->setWindowTitle(QApplication::translate("TransactionsFrame", "Frame", Q_NULLPTR));
        m_searchFor->setPlaceholderText(QApplication::translate("TransactionsFrame", "Search for address, amount, transaction hash or Payment ID", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_clearAllButton->setToolTip(QApplication::translate("TransactionsFrame", "Reset filter", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        m_clearAllButton->setText(QString());
        m_selectedAmountLabel->setText(QApplication::translate("TransactionsFrame", "Selected amount: ", Q_NULLPTR));
        m_selectedAmount->setText(QString());
        m_csvButton->setText(QApplication::translate("TransactionsFrame", "Export", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TransactionsFrame: public Ui_TransactionsFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONSFRAME_H
