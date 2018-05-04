/********************************************************************************
** Form generated from reading UI file 'TTest11_7A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTEST11_7A_H
#define UI_TTEST11_7A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "MyWidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTest11_7AClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    MyWidget *myWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TTest11_7AClass)
    {
        if (TTest11_7AClass->objectName().isEmpty())
            TTest11_7AClass->setObjectName(QStringLiteral("TTest11_7AClass"));
        TTest11_7AClass->resize(600, 400);
        centralWidget = new QWidget(TTest11_7AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        myWidget = new MyWidget(centralWidget);
        myWidget->setObjectName(QStringLiteral("myWidget"));
        myWidget->setFrameShape(QFrame::StyledPanel);
        myWidget->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(myWidget, 0, 0, 1, 1);

        TTest11_7AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TTest11_7AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        TTest11_7AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TTest11_7AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TTest11_7AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TTest11_7AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TTest11_7AClass->setStatusBar(statusBar);

        retranslateUi(TTest11_7AClass);

        QMetaObject::connectSlotsByName(TTest11_7AClass);
    } // setupUi

    void retranslateUi(QMainWindow *TTest11_7AClass)
    {
        TTest11_7AClass->setWindowTitle(QApplication::translate("TTest11_7AClass", "TTest11_7A", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTest11_7AClass: public Ui_TTest11_7AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTEST11_7A_H
