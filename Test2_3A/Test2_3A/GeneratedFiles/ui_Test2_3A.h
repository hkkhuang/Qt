/********************************************************************************
** Form generated from reading UI file 'Test2_3A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST2_3A_H
#define UI_TEST2_3A_H

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

class Ui_Test2_3AClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test2_3AClass)
    {
        if (Test2_3AClass->objectName().isEmpty())
            Test2_3AClass->setObjectName(QStringLiteral("Test2_3AClass"));
        Test2_3AClass->resize(600, 400);
        menuBar = new QMenuBar(Test2_3AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Test2_3AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test2_3AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test2_3AClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Test2_3AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Test2_3AClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Test2_3AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test2_3AClass->setStatusBar(statusBar);

        retranslateUi(Test2_3AClass);

        QMetaObject::connectSlotsByName(Test2_3AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test2_3AClass)
    {
        Test2_3AClass->setWindowTitle(QApplication::translate("Test2_3AClass", "Test2_3A", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test2_3AClass: public Ui_Test2_3AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST2_3A_H
