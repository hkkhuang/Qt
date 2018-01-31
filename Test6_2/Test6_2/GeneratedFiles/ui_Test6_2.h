/********************************************************************************
** Form generated from reading UI file 'Test6_2.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST6_2_H
#define UI_TEST6_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test6_2Class
{
public:
    QWidget *centralWidget;
    QPushButton *btnTest;
    QLineEdit *editTest;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test6_2Class)
    {
        if (Test6_2Class->objectName().isEmpty())
            Test6_2Class->setObjectName(QStringLiteral("Test6_2Class"));
        Test6_2Class->resize(1124, 744);
        centralWidget = new QWidget(Test6_2Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnTest = new QPushButton(centralWidget);
        btnTest->setObjectName(QStringLiteral("btnTest"));
        btnTest->setGeometry(QRect(690, 193, 181, 51));
        editTest = new QLineEdit(centralWidget);
        editTest->setObjectName(QStringLiteral("editTest"));
        editTest->setGeometry(QRect(120, 190, 521, 51));
        Test6_2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test6_2Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1124, 30));
        Test6_2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test6_2Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test6_2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test6_2Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test6_2Class->setStatusBar(statusBar);

        retranslateUi(Test6_2Class);

        QMetaObject::connectSlotsByName(Test6_2Class);
    } // setupUi

    void retranslateUi(QMainWindow *Test6_2Class)
    {
        Test6_2Class->setWindowTitle(QApplication::translate("Test6_2Class", "Test6_2", Q_NULLPTR));
        btnTest->setText(QApplication::translate("Test6_2Class", "\346\265\213\350\257\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test6_2Class: public Ui_Test6_2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST6_2_H
