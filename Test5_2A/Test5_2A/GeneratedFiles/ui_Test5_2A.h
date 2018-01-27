/********************************************************************************
** Form generated from reading UI file 'Test5_2A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST5_2A_H
#define UI_TEST5_2A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test5_2AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *editName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *editPwd;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOK;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test5_2AClass)
    {
        if (Test5_2AClass->objectName().isEmpty())
            Test5_2AClass->setObjectName(QStringLiteral("Test5_2AClass"));
        Test5_2AClass->resize(600, 400);
        centralWidget = new QWidget(Test5_2AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        editName = new QLineEdit(centralWidget);
        editName->setObjectName(QStringLiteral("editName"));

        horizontalLayout->addWidget(editName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        editPwd = new QLineEdit(centralWidget);
        editPwd->setObjectName(QStringLiteral("editPwd"));
        editPwd->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(editPwd);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnOK = new QPushButton(centralWidget);
        btnOK->setObjectName(QStringLiteral("btnOK"));

        horizontalLayout_3->addWidget(btnOK);


        verticalLayout->addLayout(horizontalLayout_3);

        Test5_2AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test5_2AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 30));
        Test5_2AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test5_2AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test5_2AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test5_2AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test5_2AClass->setStatusBar(statusBar);

        retranslateUi(Test5_2AClass);

        QMetaObject::connectSlotsByName(Test5_2AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test5_2AClass)
    {
        Test5_2AClass->setWindowTitle(QApplication::translate("Test5_2AClass", "Test5_2A", Q_NULLPTR));
        label->setText(QApplication::translate("Test5_2AClass", "\347\224\250\346\210\267\345\220\215:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Test5_2AClass", "\345\257\206  \347\240\201:", Q_NULLPTR));
        btnOK->setText(QApplication::translate("Test5_2AClass", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test5_2AClass: public Ui_Test5_2AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST5_2A_H
