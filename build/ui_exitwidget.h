/********************************************************************************
** Form generated from reading UI file 'exitwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXITWIDGET_H
#define UI_EXITWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExitWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *m_clockLabel;
    QLabel *m_label;

    void setupUi(QWidget *ExitWidget)
    {
        if (ExitWidget->objectName().isEmpty())
            ExitWidget->setObjectName(QStringLiteral("ExitWidget"));
        ExitWidget->resize(385, 66);
        horizontalLayout = new QHBoxLayout(ExitWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_clockLabel = new QLabel(ExitWidget);
        m_clockLabel->setObjectName(QStringLiteral("m_clockLabel"));

        horizontalLayout->addWidget(m_clockLabel);

        m_label = new QLabel(ExitWidget);
        m_label->setObjectName(QStringLiteral("m_label"));

        horizontalLayout->addWidget(m_label);

        horizontalLayout->setStretch(1, 1);

        retranslateUi(ExitWidget);

        QMetaObject::connectSlotsByName(ExitWidget);
    } // setupUi

    void retranslateUi(QWidget *ExitWidget)
    {
        ExitWidget->setWindowTitle(QApplication::translate("ExitWidget", "Saving data", Q_NULLPTR));
        m_clockLabel->setText(QString());
        m_label->setText(QApplication::translate("ExitWidget", "%1 wallet is saving data.\n"
"Please wait...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ExitWidget: public Ui_ExitWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXITWIDGET_H
