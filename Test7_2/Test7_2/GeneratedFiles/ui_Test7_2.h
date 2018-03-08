/********************************************************************************
** Form generated from reading UI file 'Test7_2.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST7_2_H
#define UI_TEST7_2_H

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

class Ui_Test7_2Class
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnOpen;
    QPushButton *btnSave;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test7_2Class)
    {
        if (Test7_2Class->objectName().isEmpty())
            Test7_2Class->setObjectName(QStringLiteral("Test7_2Class"));
        Test7_2Class->resize(642, 409);
        centralWidget = new QWidget(Test7_2Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnOpen = new QPushButton(centralWidget);
        btnOpen->setObjectName(QStringLiteral("btnOpen"));

        horizontalLayout->addWidget(btnOpen);

        btnSave = new QPushButton(centralWidget);
        btnSave->setObjectName(QStringLiteral("btnSave"));

        horizontalLayout->addWidget(btnSave);

        horizontalSpacer = new QSpacerItem(468, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        Test7_2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test7_2Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 642, 23));
        Test7_2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test7_2Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test7_2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test7_2Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test7_2Class->setStatusBar(statusBar);

        retranslateUi(Test7_2Class);

        QMetaObject::connectSlotsByName(Test7_2Class);
    } // setupUi

    void retranslateUi(QMainWindow *Test7_2Class)
    {
        Test7_2Class->setWindowTitle(QApplication::translate("Test7_2Class", "Test7_2", Q_NULLPTR));
        btnOpen->setText(QApplication::translate("Test7_2Class", "\346\211\223\345\274\200", Q_NULLPTR));
        btnSave->setText(QApplication::translate("Test7_2Class", "\344\277\235\345\255\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test7_2Class: public Ui_Test7_2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST7_2_H
