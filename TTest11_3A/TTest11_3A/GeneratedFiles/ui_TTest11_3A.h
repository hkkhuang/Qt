/********************************************************************************
** Form generated from reading UI file 'TTest11_3A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTEST11_3A_H
#define UI_TTEST11_3A_H

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

class Ui_TTest11_3AClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TTest11_3AClass)
    {
        if (TTest11_3AClass->objectName().isEmpty())
            TTest11_3AClass->setObjectName(QStringLiteral("TTest11_3AClass"));
        TTest11_3AClass->resize(600, 400);
        menuBar = new QMenuBar(TTest11_3AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        TTest11_3AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TTest11_3AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TTest11_3AClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(TTest11_3AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        TTest11_3AClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TTest11_3AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TTest11_3AClass->setStatusBar(statusBar);

        retranslateUi(TTest11_3AClass);

        QMetaObject::connectSlotsByName(TTest11_3AClass);
    } // setupUi

    void retranslateUi(QMainWindow *TTest11_3AClass)
    {
        TTest11_3AClass->setWindowTitle(QApplication::translate("TTest11_3AClass", "TTest11_3A", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTest11_3AClass: public Ui_TTest11_3AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTEST11_3A_H
