/********************************************************************************
** Form generated from reading UI file 'TTest12_4A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTEST12_4A_H
#define UI_TTEST12_4A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TTest12_4AClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TTest12_4AClass)
    {
        if (TTest12_4AClass->objectName().isEmpty())
            TTest12_4AClass->setObjectName(QStringLiteral("TTest12_4AClass"));
        TTest12_4AClass->resize(600, 400);
        centralWidget = new QWidget(TTest12_4AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout->addWidget(listWidget);

        TTest12_4AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TTest12_4AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        TTest12_4AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TTest12_4AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TTest12_4AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TTest12_4AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TTest12_4AClass->setStatusBar(statusBar);

        retranslateUi(TTest12_4AClass);

        QMetaObject::connectSlotsByName(TTest12_4AClass);
    } // setupUi

    void retranslateUi(QMainWindow *TTest12_4AClass)
    {
        TTest12_4AClass->setWindowTitle(QApplication::translate("TTest12_4AClass", "TTest12_4A", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTest12_4AClass: public Ui_TTest12_4AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTEST12_4A_H
