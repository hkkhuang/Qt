/********************************************************************************
** Form generated from reading UI file 'Test8_2A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST8_2A_H
#define UI_TEST8_2A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test8_2AClass
{
public:
    QWidget *centralWidget;
    QLabel *labelTime;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test8_2AClass)
    {
        if (Test8_2AClass->objectName().isEmpty())
            Test8_2AClass->setObjectName(QStringLiteral("Test8_2AClass"));
        Test8_2AClass->resize(600, 400);
        centralWidget = new QWidget(Test8_2AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        labelTime = new QLabel(centralWidget);
        labelTime->setObjectName(QStringLiteral("labelTime"));
        labelTime->setGeometry(QRect(200, 40, 81, 18));
        Test8_2AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test8_2AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 30));
        Test8_2AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test8_2AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test8_2AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test8_2AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test8_2AClass->setStatusBar(statusBar);

        retranslateUi(Test8_2AClass);

        QMetaObject::connectSlotsByName(Test8_2AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test8_2AClass)
    {
        Test8_2AClass->setWindowTitle(QApplication::translate("Test8_2AClass", "Test8_2A", Q_NULLPTR));
        labelTime->setText(QApplication::translate("Test8_2AClass", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test8_2AClass: public Ui_Test8_2AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST8_2A_H
