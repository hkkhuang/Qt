/********************************************************************************
** Form generated from reading UI file 'Test8_1B.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST8_1B_H
#define UI_TEST8_1B_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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

class Ui_Test8_1BClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnTest;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test8_1BClass)
    {
        if (Test8_1BClass->objectName().isEmpty())
            Test8_1BClass->setObjectName(QStringLiteral("Test8_1BClass"));
        Test8_1BClass->resize(600, 400);
        centralWidget = new QWidget(Test8_1BClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnTest = new QPushButton(centralWidget);
        btnTest->setObjectName(QStringLiteral("btnTest"));

        horizontalLayout->addWidget(btnTest);

        horizontalSpacer = new QSpacerItem(378, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        Test8_1BClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test8_1BClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 30));
        Test8_1BClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test8_1BClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test8_1BClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test8_1BClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test8_1BClass->setStatusBar(statusBar);

        retranslateUi(Test8_1BClass);

        QMetaObject::connectSlotsByName(Test8_1BClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test8_1BClass)
    {
        Test8_1BClass->setWindowTitle(QApplication::translate("Test8_1BClass", "Test8_1B", Q_NULLPTR));
        btnTest->setText(QApplication::translate("Test8_1BClass", "\346\265\213\350\257\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test8_1BClass: public Ui_Test8_1BClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST8_1B_H
