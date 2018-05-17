/********************************************************************************
** Form generated from reading UI file 'TTest12_3A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTEST12_3A_H
#define UI_TTEST12_3A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TTest12_3AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TTest12_3AClass)
    {
        if (TTest12_3AClass->objectName().isEmpty())
            TTest12_3AClass->setObjectName(QStringLiteral("TTest12_3AClass"));
        TTest12_3AClass->resize(604, 439);
        centralWidget = new QWidget(TTest12_3AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        TTest12_3AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TTest12_3AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 604, 23));
        TTest12_3AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TTest12_3AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TTest12_3AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TTest12_3AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TTest12_3AClass->setStatusBar(statusBar);

        retranslateUi(TTest12_3AClass);

        QMetaObject::connectSlotsByName(TTest12_3AClass);
    } // setupUi

    void retranslateUi(QMainWindow *TTest12_3AClass)
    {
        TTest12_3AClass->setWindowTitle(QApplication::translate("TTest12_3AClass", "TTest12_3A", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTest12_3AClass: public Ui_TTest12_3AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTEST12_3A_H
