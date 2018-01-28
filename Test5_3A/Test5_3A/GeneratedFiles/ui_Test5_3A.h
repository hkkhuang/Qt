/********************************************************************************
** Form generated from reading UI file 'Test5_3A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST5_3A_H
#define UI_TEST5_3A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test5_3AClass
{
public:
    QWidget *centralWidget;
    QComboBox *cmboxLang;
    QPushButton *btnOK;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test5_3AClass)
    {
        if (Test5_3AClass->objectName().isEmpty())
            Test5_3AClass->setObjectName(QStringLiteral("Test5_3AClass"));
        Test5_3AClass->resize(600, 400);
        centralWidget = new QWidget(Test5_3AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        cmboxLang = new QComboBox(centralWidget);
        cmboxLang->setObjectName(QStringLiteral("cmboxLang"));
        cmboxLang->setGeometry(QRect(30, 60, 251, 51));
        btnOK = new QPushButton(centralWidget);
        btnOK->setObjectName(QStringLiteral("btnOK"));
        btnOK->setGeometry(QRect(340, 70, 112, 34));
        Test5_3AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test5_3AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 30));
        Test5_3AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test5_3AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test5_3AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test5_3AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test5_3AClass->setStatusBar(statusBar);

        retranslateUi(Test5_3AClass);

        QMetaObject::connectSlotsByName(Test5_3AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test5_3AClass)
    {
        Test5_3AClass->setWindowTitle(QApplication::translate("Test5_3AClass", "Test5_3A", Q_NULLPTR));
        btnOK->setText(QApplication::translate("Test5_3AClass", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test5_3AClass: public Ui_Test5_3AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST5_3A_H
