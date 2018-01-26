/********************************************************************************
** Form generated from reading UI file 'Test3_3B.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST3_3B_H
#define UI_TEST3_3B_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test3_3BClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test3_3BClass)
    {
        if (Test3_3BClass->objectName().isEmpty())
            Test3_3BClass->setObjectName(QStringLiteral("Test3_3BClass"));
        Test3_3BClass->resize(600, 400);
        menuBar = new QMenuBar(Test3_3BClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Test3_3BClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test3_3BClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test3_3BClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Test3_3BClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Test3_3BClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Test3_3BClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test3_3BClass->setStatusBar(statusBar);

        retranslateUi(Test3_3BClass);

        QMetaObject::connectSlotsByName(Test3_3BClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test3_3BClass)
    {
        Test3_3BClass->setWindowTitle(QApplication::translate("Test3_3BClass", "Test3_3B", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test3_3BClass: public Ui_Test3_3BClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST3_3B_H
