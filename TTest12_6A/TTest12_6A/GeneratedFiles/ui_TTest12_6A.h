/********************************************************************************
** Form generated from reading UI file 'TTest12_6A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTEST12_6A_H
#define UI_TTEST12_6A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TTest12_6AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TTest12_6AClass)
    {
        if (TTest12_6AClass->objectName().isEmpty())
            TTest12_6AClass->setObjectName(QStringLiteral("TTest12_6AClass"));
        TTest12_6AClass->resize(600, 400);
        centralWidget = new QWidget(TTest12_6AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        verticalLayout->addWidget(treeWidget);

        TTest12_6AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TTest12_6AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        TTest12_6AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TTest12_6AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TTest12_6AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TTest12_6AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TTest12_6AClass->setStatusBar(statusBar);

        retranslateUi(TTest12_6AClass);

        QMetaObject::connectSlotsByName(TTest12_6AClass);
    } // setupUi

    void retranslateUi(QMainWindow *TTest12_6AClass)
    {
        TTest12_6AClass->setWindowTitle(QApplication::translate("TTest12_6AClass", "TTest12_6A", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTest12_6AClass: public Ui_TTest12_6AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTEST12_6A_H
