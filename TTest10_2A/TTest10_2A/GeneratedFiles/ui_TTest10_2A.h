/********************************************************************************
** Form generated from reading UI file 'TTest10_2A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTEST10_2A_H
#define UI_TTEST10_2A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TTest10_2AClass
{
public:
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionHelp;
    QAction *actionSettings;
    QAction *actionOpen;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *txtEdit;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TTest10_2AClass)
    {
        if (TTest10_2AClass->objectName().isEmpty())
            TTest10_2AClass->setObjectName(QStringLiteral("TTest10_2AClass"));
        TTest10_2AClass->resize(619, 393);
        actionNew = new QAction(TTest10_2AClass);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/TTest10_2A/Resources/new-file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionSave = new QAction(TTest10_2AClass);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/TTest10_2A/Resources/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionHelp = new QAction(TTest10_2AClass);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/TTest10_2A/Resources/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon2);
        actionSettings = new QAction(TTest10_2AClass);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/TTest10_2A/Resources/setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon3);
        actionOpen = new QAction(TTest10_2AClass);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/TTest10_2A/Resources/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon4);
        centralWidget = new QWidget(TTest10_2AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        txtEdit = new QPlainTextEdit(centralWidget);
        txtEdit->setObjectName(QStringLiteral("txtEdit"));

        verticalLayout->addWidget(txtEdit);

        TTest10_2AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TTest10_2AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 619, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        TTest10_2AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TTest10_2AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setIconSize(QSize(16, 16));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        TTest10_2AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TTest10_2AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TTest10_2AClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(actionNew);
        menu->addAction(actionOpen);
        menu->addAction(actionSave);
        menu->addSeparator();
        menu_3->addAction(actionHelp);
        menu_3->addAction(actionSettings);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);

        retranslateUi(TTest10_2AClass);

        QMetaObject::connectSlotsByName(TTest10_2AClass);
    } // setupUi

    void retranslateUi(QMainWindow *TTest10_2AClass)
    {
        TTest10_2AClass->setWindowTitle(QApplication::translate("TTest10_2AClass", "TTest10_2A", Q_NULLPTR));
        actionNew->setText(QApplication::translate("TTest10_2AClass", "\346\226\260\345\273\272", Q_NULLPTR));
        actionSave->setText(QApplication::translate("TTest10_2AClass", "\344\277\235\345\255\230", Q_NULLPTR));
        actionHelp->setText(QApplication::translate("TTest10_2AClass", "\345\270\256\345\212\251", Q_NULLPTR));
        actionSettings->setText(QApplication::translate("TTest10_2AClass", "\350\256\276\347\275\256", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("TTest10_2AClass", "\346\211\223\345\274\200", Q_NULLPTR));
        menu->setTitle(QApplication::translate("TTest10_2AClass", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("TTest10_2AClass", "\345\205\266\344\273\226", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTest10_2AClass: public Ui_TTest10_2AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTEST10_2A_H
