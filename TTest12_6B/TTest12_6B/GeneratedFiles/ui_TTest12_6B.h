/********************************************************************************
** Form generated from reading UI file 'TTest12_6B.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTEST12_6B_H
#define UI_TTEST12_6B_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TTest12_6BClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TTest12_6BClass)
    {
        if (TTest12_6BClass->objectName().isEmpty())
            TTest12_6BClass->setObjectName(QStringLiteral("TTest12_6BClass"));
        TTest12_6BClass->resize(600, 400);
        centralWidget = new QWidget(TTest12_6BClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        TTest12_6BClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TTest12_6BClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        TTest12_6BClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TTest12_6BClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TTest12_6BClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TTest12_6BClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TTest12_6BClass->setStatusBar(statusBar);

        retranslateUi(TTest12_6BClass);

        QMetaObject::connectSlotsByName(TTest12_6BClass);
    } // setupUi

    void retranslateUi(QMainWindow *TTest12_6BClass)
    {
        TTest12_6BClass->setWindowTitle(QApplication::translate("TTest12_6BClass", "TTest12_6B", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTest12_6BClass: public Ui_TTest12_6BClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTEST12_6B_H
