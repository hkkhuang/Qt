/********************************************************************************
** Form generated from reading UI file 'TTest11_4A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTEST11_4A_H
#define UI_TTEST11_4A_H

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

class Ui_TTest11_4AClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TTest11_4AClass)
    {
        if (TTest11_4AClass->objectName().isEmpty())
            TTest11_4AClass->setObjectName(QStringLiteral("TTest11_4AClass"));
        TTest11_4AClass->resize(600, 400);
        menuBar = new QMenuBar(TTest11_4AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        TTest11_4AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TTest11_4AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TTest11_4AClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(TTest11_4AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        TTest11_4AClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TTest11_4AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TTest11_4AClass->setStatusBar(statusBar);

        retranslateUi(TTest11_4AClass);

        QMetaObject::connectSlotsByName(TTest11_4AClass);
    } // setupUi

    void retranslateUi(QMainWindow *TTest11_4AClass)
    {
        TTest11_4AClass->setWindowTitle(QApplication::translate("TTest11_4AClass", "TTest11_4A", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTest11_4AClass: public Ui_TTest11_4AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTEST11_4A_H
