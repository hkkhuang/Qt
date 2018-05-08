/********************************************************************************
** Form generated from reading UI file 'TTest12_1A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTEST12_1A_H
#define UI_TTEST12_1A_H

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

class Ui_TTest12_1AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnChange;
    QPushButton *btnRemove;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TTest12_1AClass)
    {
        if (TTest12_1AClass->objectName().isEmpty())
            TTest12_1AClass->setObjectName(QStringLiteral("TTest12_1AClass"));
        TTest12_1AClass->resize(600, 425);
        centralWidget = new QWidget(TTest12_1AClass);
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
        horizontalSpacer = new QSpacerItem(358, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnChange = new QPushButton(centralWidget);
        btnChange->setObjectName(QStringLiteral("btnChange"));

        horizontalLayout->addWidget(btnChange);

        btnRemove = new QPushButton(centralWidget);
        btnRemove->setObjectName(QStringLiteral("btnRemove"));

        horizontalLayout->addWidget(btnRemove);


        verticalLayout->addLayout(horizontalLayout);

        TTest12_1AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TTest12_1AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        TTest12_1AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TTest12_1AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TTest12_1AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TTest12_1AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TTest12_1AClass->setStatusBar(statusBar);

        retranslateUi(TTest12_1AClass);

        QMetaObject::connectSlotsByName(TTest12_1AClass);
    } // setupUi

    void retranslateUi(QMainWindow *TTest12_1AClass)
    {
        TTest12_1AClass->setWindowTitle(QApplication::translate("TTest12_1AClass", "TTest12_1A", Q_NULLPTR));
        btnChange->setText(QApplication::translate("TTest12_1AClass", "\345\210\207\346\215\242\350\247\206\345\233\276", Q_NULLPTR));
        btnRemove->setText(QApplication::translate("TTest12_1AClass", "\347\247\273\351\231\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTest12_1AClass: public Ui_TTest12_1AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTEST12_1A_H
