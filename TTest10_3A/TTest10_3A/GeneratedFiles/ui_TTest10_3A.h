/********************************************************************************
** Form generated from reading UI file 'TTest10_3A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTEST10_3A_H
#define UI_TTEST10_3A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TTest10_3AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *txtContent;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txtSearch;
    QPushButton *btnSearch;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *TTest10_3AClass)
    {
        if (TTest10_3AClass->objectName().isEmpty())
            TTest10_3AClass->setObjectName(QStringLiteral("TTest10_3AClass"));
        TTest10_3AClass->resize(600, 400);
        centralWidget = new QWidget(TTest10_3AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        txtContent = new QPlainTextEdit(centralWidget);
        txtContent->setObjectName(QStringLiteral("txtContent"));

        verticalLayout->addWidget(txtContent);

        TTest10_3AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TTest10_3AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        TTest10_3AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TTest10_3AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TTest10_3AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TTest10_3AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TTest10_3AClass->setStatusBar(statusBar);
        dockWidget = new QDockWidget(TTest10_3AClass);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setMinimumSize(QSize(200, 71));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        txtSearch = new QLineEdit(dockWidgetContents);
        txtSearch->setObjectName(QStringLiteral("txtSearch"));

        horizontalLayout->addWidget(txtSearch);

        btnSearch = new QPushButton(dockWidgetContents);
        btnSearch->setObjectName(QStringLiteral("btnSearch"));
        btnSearch->setMinimumSize(QSize(40, 0));
        btnSearch->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(btnSearch);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 269, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        dockWidget->setWidget(dockWidgetContents);
        TTest10_3AClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        retranslateUi(TTest10_3AClass);

        QMetaObject::connectSlotsByName(TTest10_3AClass);
    } // setupUi

    void retranslateUi(QMainWindow *TTest10_3AClass)
    {
        TTest10_3AClass->setWindowTitle(QApplication::translate("TTest10_3AClass", "TTest10_3A", Q_NULLPTR));
        dockWidget->setWindowTitle(QApplication::translate("TTest10_3AClass", "\346\220\234\347\264\242", Q_NULLPTR));
        btnSearch->setText(QApplication::translate("TTest10_3AClass", "\346\220\234\347\264\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTest10_3AClass: public Ui_TTest10_3AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTEST10_3A_H
