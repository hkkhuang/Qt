/********************************************************************************
** Form generated from reading UI file 'Test5_4A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST5_4A_H
#define UI_TEST5_4A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test5_4AClass
{
public:
    QWidget *centralWidget;
    QToolButton *btnHelp;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test5_4AClass)
    {
        if (Test5_4AClass->objectName().isEmpty())
            Test5_4AClass->setObjectName(QStringLiteral("Test5_4AClass"));
        Test5_4AClass->resize(820, 630);
        centralWidget = new QWidget(Test5_4AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnHelp = new QToolButton(centralWidget);
        btnHelp->setObjectName(QStringLiteral("btnHelp"));
        btnHelp->setGeometry(QRect(340, 50, 91, 91));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/Resources/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnHelp->setIcon(icon);
        btnHelp->setIconSize(QSize(48, 48));
        btnHelp->setCheckable(true);
        btnHelp->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btnHelp->setAutoRaise(false);
        Test5_4AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test5_4AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 820, 30));
        Test5_4AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test5_4AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test5_4AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test5_4AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test5_4AClass->setStatusBar(statusBar);

        retranslateUi(Test5_4AClass);

        QMetaObject::connectSlotsByName(Test5_4AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test5_4AClass)
    {
        Test5_4AClass->setWindowTitle(QApplication::translate("Test5_4AClass", "Test5_4A", Q_NULLPTR));
        btnHelp->setText(QApplication::translate("Test5_4AClass", "\345\270\256\345\212\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test5_4AClass: public Ui_Test5_4AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST5_4A_H
