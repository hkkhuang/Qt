/********************************************************************************
** Form generated from reading UI file 'Test2_1A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST2_1A_H
#define UI_TEST2_1A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test2_1AClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QLineEdit *lineEdit;
    QDoubleSpinBox *doubleSpinBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test2_1AClass)
    {
        if (Test2_1AClass->objectName().isEmpty())
            Test2_1AClass->setObjectName(QStringLiteral("Test2_1AClass"));
        Test2_1AClass->resize(730, 524);
        centralWidget = new QWidget(Test2_1AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 50, 112, 34));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(140, 150, 105, 22));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(130, 230, 113, 25));
        doubleSpinBox = new QDoubleSpinBox(centralWidget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(140, 300, 76, 25));
        Test2_1AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test2_1AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 730, 30));
        Test2_1AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test2_1AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test2_1AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test2_1AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test2_1AClass->setStatusBar(statusBar);

        retranslateUi(Test2_1AClass);

        QMetaObject::connectSlotsByName(Test2_1AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test2_1AClass)
    {
        Test2_1AClass->setWindowTitle(QApplication::translate("Test2_1AClass", "Test2_1A", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Test2_1AClass", "PushButton", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Test2_1AClass", "CheckBox", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test2_1AClass: public Ui_Test2_1AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST2_1A_H
