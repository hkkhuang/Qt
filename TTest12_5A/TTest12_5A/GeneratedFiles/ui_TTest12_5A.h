/********************************************************************************
** Form generated from reading UI file 'TTest12_5A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTEST12_5A_H
#define UI_TTEST12_5A_H

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

class Ui_TTest12_5AClass
{
public:
    QAction *actionAdd;
    QAction *actionRemove;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TTest12_5AClass)
    {
        if (TTest12_5AClass->objectName().isEmpty())
            TTest12_5AClass->setObjectName(QStringLiteral("TTest12_5AClass"));
        TTest12_5AClass->resize(554, 367);
        actionAdd = new QAction(TTest12_5AClass);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        actionRemove = new QAction(TTest12_5AClass);
        actionRemove->setObjectName(QStringLiteral("actionRemove"));
        centralWidget = new QWidget(TTest12_5AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout->addWidget(listWidget);

        TTest12_5AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TTest12_5AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 554, 23));
        TTest12_5AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TTest12_5AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TTest12_5AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TTest12_5AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TTest12_5AClass->setStatusBar(statusBar);

        retranslateUi(TTest12_5AClass);

        QMetaObject::connectSlotsByName(TTest12_5AClass);
    } // setupUi

    void retranslateUi(QMainWindow *TTest12_5AClass)
    {
        TTest12_5AClass->setWindowTitle(QApplication::translate("TTest12_5AClass", "TTest12_5A", Q_NULLPTR));
        actionAdd->setText(QApplication::translate("TTest12_5AClass", "\346\267\273\345\212\240", Q_NULLPTR));
        actionRemove->setText(QApplication::translate("TTest12_5AClass", "\345\210\240\351\231\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTest12_5AClass: public Ui_TTest12_5AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTEST12_5A_H
