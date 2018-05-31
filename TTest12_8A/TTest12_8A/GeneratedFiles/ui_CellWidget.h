/********************************************************************************
** Form generated from reading UI file 'CellWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELLWIDGET_H
#define UI_CELLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CellWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *btnDelete;

    void setupUi(QWidget *CellWidget)
    {
        if (CellWidget->objectName().isEmpty())
            CellWidget->setObjectName(QStringLiteral("CellWidget"));
        CellWidget->resize(362, 24);
        horizontalLayout = new QHBoxLayout(CellWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnDelete = new QPushButton(CellWidget);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));

        horizontalLayout->addWidget(btnDelete);


        retranslateUi(CellWidget);

        QMetaObject::connectSlotsByName(CellWidget);
    } // setupUi

    void retranslateUi(QWidget *CellWidget)
    {
        CellWidget->setWindowTitle(QApplication::translate("CellWidget", "CellWidget", Q_NULLPTR));
        btnDelete->setText(QApplication::translate("CellWidget", "\345\210\240\351\231\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CellWidget: public Ui_CellWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELLWIDGET_H
