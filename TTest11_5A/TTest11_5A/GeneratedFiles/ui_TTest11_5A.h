/********************************************************************************
** Form generated from reading UI file 'TTest11_5A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTEST11_5A_H
#define UI_TTEST11_5A_H

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

class Ui_TTest11_5AClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TTest11_5AClass)
    {
        if (TTest11_5AClass->objectName().isEmpty())
            TTest11_5AClass->setObjectName(QStringLiteral("TTest11_5AClass"));
        TTest11_5AClass->resize(600, 400);
        centralWidget = new QWidget(TTest11_5AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        TTest11_5AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TTest11_5AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        TTest11_5AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TTest11_5AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TTest11_5AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TTest11_5AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TTest11_5AClass->setStatusBar(statusBar);

        retranslateUi(TTest11_5AClass);

        QMetaObject::connectSlotsByName(TTest11_5AClass);
    } // setupUi

    void retranslateUi(QMainWindow *TTest11_5AClass)
    {
        TTest11_5AClass->setWindowTitle(QApplication::translate("TTest11_5AClass", "TTest11_5A", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTest11_5AClass: public Ui_TTest11_5AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTEST11_5A_H
