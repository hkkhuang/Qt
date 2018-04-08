/********************************************************************************
** Form generated from reading UI file 'Test9_1B.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST9_1B_H
#define UI_TEST9_1B_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test9_1BClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnNew;
    QPushButton *btnDelete;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test9_1BClass)
    {
        if (Test9_1BClass->objectName().isEmpty())
            Test9_1BClass->setObjectName(QStringLiteral("Test9_1BClass"));
        Test9_1BClass->resize(600, 400);
        centralWidget = new QWidget(Test9_1BClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(318, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnNew = new QPushButton(centralWidget);
        btnNew->setObjectName(QStringLiteral("btnNew"));

        horizontalLayout->addWidget(btnNew);

        btnDelete = new QPushButton(centralWidget);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));

        horizontalLayout->addWidget(btnDelete);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        Test9_1BClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test9_1BClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        Test9_1BClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test9_1BClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test9_1BClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test9_1BClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test9_1BClass->setStatusBar(statusBar);

        retranslateUi(Test9_1BClass);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Test9_1BClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test9_1BClass)
    {
        Test9_1BClass->setWindowTitle(QApplication::translate("Test9_1BClass", "Test9_1B", Q_NULLPTR));
        btnNew->setText(QApplication::translate("Test9_1BClass", "\346\226\260\345\273\272", Q_NULLPTR));
        btnDelete->setText(QApplication::translate("Test9_1BClass", "\345\210\240\351\231\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test9_1BClass: public Ui_Test9_1BClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST9_1B_H
