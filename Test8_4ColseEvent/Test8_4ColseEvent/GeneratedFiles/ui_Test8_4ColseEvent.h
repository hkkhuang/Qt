/********************************************************************************
** Form generated from reading UI file 'Test8_4ColseEvent.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST8_4COLSEEVENT_H
#define UI_TEST8_4COLSEEVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test8_4ColseEventClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test8_4ColseEventClass)
    {
        if (Test8_4ColseEventClass->objectName().isEmpty())
            Test8_4ColseEventClass->setObjectName(QStringLiteral("Test8_4ColseEventClass"));
        Test8_4ColseEventClass->resize(471, 113);
        centralWidget = new QWidget(Test8_4ColseEventClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font: 87 20pt \"Arial Black\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label);

        Test8_4ColseEventClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test8_4ColseEventClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 471, 23));
        Test8_4ColseEventClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test8_4ColseEventClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test8_4ColseEventClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test8_4ColseEventClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test8_4ColseEventClass->setStatusBar(statusBar);

        retranslateUi(Test8_4ColseEventClass);

        QMetaObject::connectSlotsByName(Test8_4ColseEventClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test8_4ColseEventClass)
    {
        Test8_4ColseEventClass->setWindowTitle(QApplication::translate("Test8_4ColseEventClass", "Test8_4ColseEvent", Q_NULLPTR));
        label->setText(QApplication::translate("Test8_4ColseEventClass", "\351\207\215\345\206\231CloseEvent() \345\205\263\351\227\255\346\227\266\346\217\220\347\244\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test8_4ColseEventClass: public Ui_Test8_4ColseEventClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST8_4COLSEEVENT_H
