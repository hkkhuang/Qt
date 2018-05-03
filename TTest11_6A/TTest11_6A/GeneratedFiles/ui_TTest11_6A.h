/********************************************************************************
** Form generated from reading UI file 'TTest11_6A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTEST11_6A_H
#define UI_TTEST11_6A_H

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

class Ui_TTest11_6AClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TTest11_6AClass)
    {
        if (TTest11_6AClass->objectName().isEmpty())
            TTest11_6AClass->setObjectName(QStringLiteral("TTest11_6AClass"));
        TTest11_6AClass->resize(600, 400);
        menuBar = new QMenuBar(TTest11_6AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        TTest11_6AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TTest11_6AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TTest11_6AClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(TTest11_6AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        TTest11_6AClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TTest11_6AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TTest11_6AClass->setStatusBar(statusBar);

        retranslateUi(TTest11_6AClass);

        QMetaObject::connectSlotsByName(TTest11_6AClass);
    } // setupUi

    void retranslateUi(QMainWindow *TTest11_6AClass)
    {
        TTest11_6AClass->setWindowTitle(QApplication::translate("TTest11_6AClass", "TTest11_6A", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTest11_6AClass: public Ui_TTest11_6AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTEST11_6A_H
