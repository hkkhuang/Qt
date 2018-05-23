/********************************************************************************
** Form generated from reading UI file 'TTest12_7A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTEST12_7A_H
#define UI_TTEST12_7A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TTest12_7AClass
{
public:
    QAction *actionDirlist;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TTest12_7AClass)
    {
        if (TTest12_7AClass->objectName().isEmpty())
            TTest12_7AClass->setObjectName(QStringLiteral("TTest12_7AClass"));
        TTest12_7AClass->resize(600, 400);
        actionDirlist = new QAction(TTest12_7AClass);
        actionDirlist->setObjectName(QStringLiteral("actionDirlist"));
        centralWidget = new QWidget(TTest12_7AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(centralWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->header()->setDefaultSectionSize(40);

        verticalLayout->addWidget(treeWidget);

        TTest12_7AClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(TTest12_7AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TTest12_7AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TTest12_7AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TTest12_7AClass->setStatusBar(statusBar);

        mainToolBar->addAction(actionDirlist);

        retranslateUi(TTest12_7AClass);

        QMetaObject::connectSlotsByName(TTest12_7AClass);
    } // setupUi

    void retranslateUi(QMainWindow *TTest12_7AClass)
    {
        TTest12_7AClass->setWindowTitle(QApplication::translate("TTest12_7AClass", "TTest12_7A", Q_NULLPTR));
        actionDirlist->setText(QApplication::translate("TTest12_7AClass", "\346\265\213\350\257\225", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("TTest12_7AClass", "\346\226\207\344\273\266\345\220\215", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("TTest12_7AClass", "\351\200\211\344\270\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTest12_7AClass: public Ui_TTest12_7AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTEST12_7A_H
