/********************************************************************************
** Form generated from reading UI file 'TTest12_8A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTEST12_8A_H
#define UI_TTEST12_8A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TTest12_8AClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *treeWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TTest12_8AClass)
    {
        if (TTest12_8AClass->objectName().isEmpty())
            TTest12_8AClass->setObjectName(QStringLiteral("TTest12_8AClass"));
        TTest12_8AClass->resize(600, 400);
        centralWidget = new QWidget(TTest12_8AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        treeWidget = new QTreeWidget(centralWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        horizontalLayout->addWidget(treeWidget);

        TTest12_8AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TTest12_8AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        TTest12_8AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TTest12_8AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TTest12_8AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TTest12_8AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TTest12_8AClass->setStatusBar(statusBar);

        retranslateUi(TTest12_8AClass);

        QMetaObject::connectSlotsByName(TTest12_8AClass);
    } // setupUi

    void retranslateUi(QMainWindow *TTest12_8AClass)
    {
        TTest12_8AClass->setWindowTitle(QApplication::translate("TTest12_8AClass", "TTest12_8A", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("TTest12_8AClass", "\346\223\215\344\275\234", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("TTest12_8AClass", "\346\226\207\344\273\266\345\220\215", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTest12_8AClass: public Ui_TTest12_8AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTEST12_8A_H
