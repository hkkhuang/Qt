/********************************************************************************
** Form generated from reading UI file 'TTest11_2A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTEST11_2A_H
#define UI_TTEST11_2A_H

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

class Ui_TTest11_2AClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TTest11_2AClass)
    {
        if (TTest11_2AClass->objectName().isEmpty())
            TTest11_2AClass->setObjectName(QStringLiteral("TTest11_2AClass"));
        TTest11_2AClass->resize(600, 400);
        menuBar = new QMenuBar(TTest11_2AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        TTest11_2AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TTest11_2AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TTest11_2AClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(TTest11_2AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        TTest11_2AClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TTest11_2AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TTest11_2AClass->setStatusBar(statusBar);

        retranslateUi(TTest11_2AClass);

        QMetaObject::connectSlotsByName(TTest11_2AClass);
    } // setupUi

    void retranslateUi(QMainWindow *TTest11_2AClass)
    {
        TTest11_2AClass->setWindowTitle(QApplication::translate("TTest11_2AClass", "TTest11_2A", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTest11_2AClass: public Ui_TTest11_2AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTEST11_2A_H
