/********************************************************************************
** Form generated from reading UI file 'TTest10_1A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTEST10_1A_H
#define UI_TTEST10_1A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TTest10_1AClass
{
public:
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionSetting;
    QAction *actionHelp;
    QWidget *centralWidget;
    QLabel *lblMsg;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TTest10_1AClass)
    {
        if (TTest10_1AClass->objectName().isEmpty())
            TTest10_1AClass->setObjectName(QStringLiteral("TTest10_1AClass"));
        TTest10_1AClass->resize(600, 400);
        actionNew = new QAction(TTest10_1AClass);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/TTest10_1A/Resources/new-file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionSave = new QAction(TTest10_1AClass);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/TTest10_1A/Resources/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionSetting = new QAction(TTest10_1AClass);
        actionSetting->setObjectName(QStringLiteral("actionSetting"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/TTest10_1A/Resources/setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetting->setIcon(icon2);
        actionHelp = new QAction(TTest10_1AClass);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/TTest10_1A/Resources/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon3);
        centralWidget = new QWidget(TTest10_1AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lblMsg = new QLabel(centralWidget);
        lblMsg->setObjectName(QStringLiteral("lblMsg"));
        lblMsg->setGeometry(QRect(20, 30, 54, 12));
        TTest10_1AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TTest10_1AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        TTest10_1AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TTest10_1AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setIconSize(QSize(16, 16));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        TTest10_1AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TTest10_1AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TTest10_1AClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(actionNew);
        menu->addAction(actionSave);
        menu_2->addAction(actionHelp);
        menu_2->addAction(actionSetting);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionSave);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSetting);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionHelp);

        retranslateUi(TTest10_1AClass);

        QMetaObject::connectSlotsByName(TTest10_1AClass);
    } // setupUi

    void retranslateUi(QMainWindow *TTest10_1AClass)
    {
        TTest10_1AClass->setWindowTitle(QApplication::translate("TTest10_1AClass", "TTest10_1A", Q_NULLPTR));
        actionNew->setText(QApplication::translate("TTest10_1AClass", "\346\226\260\345\273\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("TTest10_1AClass", "\346\226\260\345\273\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSave->setText(QApplication::translate("TTest10_1AClass", "\344\277\235\345\255\230", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("TTest10_1AClass", "\344\277\235\345\255\230", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSetting->setText(QApplication::translate("TTest10_1AClass", "\350\256\276\347\275\256", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSetting->setToolTip(QApplication::translate("TTest10_1AClass", "\350\256\276\347\275\256", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionHelp->setText(QApplication::translate("TTest10_1AClass", "\345\270\256\345\212\251", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionHelp->setToolTip(QApplication::translate("TTest10_1AClass", "\345\270\256\345\212\251", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lblMsg->setText(QApplication::translate("TTest10_1AClass", "lblMsg", Q_NULLPTR));
        menu->setTitle(QApplication::translate("TTest10_1AClass", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("TTest10_1AClass", "\345\270\256\345\212\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTest10_1AClass: public Ui_TTest10_1AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTEST10_1A_H
