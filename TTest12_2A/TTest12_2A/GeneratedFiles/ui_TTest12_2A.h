/********************************************************************************
** Form generated from reading UI file 'TTest12_2A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTEST12_2A_H
#define UI_TTEST12_2A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TTest12_2AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnRemove;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TTest12_2AClass)
    {
        if (TTest12_2AClass->objectName().isEmpty())
            TTest12_2AClass->setObjectName(QStringLiteral("TTest12_2AClass"));
        TTest12_2AClass->resize(600, 400);
        centralWidget = new QWidget(TTest12_2AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(448, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnRemove = new QPushButton(centralWidget);
        btnRemove->setObjectName(QStringLiteral("btnRemove"));

        horizontalLayout->addWidget(btnRemove);


        verticalLayout->addLayout(horizontalLayout);

        TTest12_2AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TTest12_2AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        TTest12_2AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TTest12_2AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TTest12_2AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TTest12_2AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TTest12_2AClass->setStatusBar(statusBar);

        retranslateUi(TTest12_2AClass);

        QMetaObject::connectSlotsByName(TTest12_2AClass);
    } // setupUi

    void retranslateUi(QMainWindow *TTest12_2AClass)
    {
        TTest12_2AClass->setWindowTitle(QApplication::translate("TTest12_2AClass", "TTest12_2A", Q_NULLPTR));
        btnRemove->setText(QApplication::translate("TTest12_2AClass", "\347\247\273\351\231\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTest12_2AClass: public Ui_TTest12_2AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTEST12_2A_H
