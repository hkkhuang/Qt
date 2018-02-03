/********************************************************************************
** Form generated from reading UI file 'Test7_4A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST7_4A_H
#define UI_TEST7_4A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Test7_4AClass
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnStartSearch;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *Test7_4AClass)
    {
        if (Test7_4AClass->objectName().isEmpty())
            Test7_4AClass->setObjectName(QStringLiteral("Test7_4AClass"));
        Test7_4AClass->resize(600, 400);
        verticalLayout = new QVBoxLayout(Test7_4AClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnStartSearch = new QPushButton(Test7_4AClass);
        btnStartSearch->setObjectName(QStringLiteral("btnStartSearch"));

        horizontalLayout->addWidget(btnStartSearch);

        horizontalSpacer = new QSpacerItem(408, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        plainTextEdit = new QPlainTextEdit(Test7_4AClass);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);


        retranslateUi(Test7_4AClass);

        QMetaObject::connectSlotsByName(Test7_4AClass);
    } // setupUi

    void retranslateUi(QDialog *Test7_4AClass)
    {
        Test7_4AClass->setWindowTitle(QApplication::translate("Test7_4AClass", "Test7_4A", Q_NULLPTR));
        btnStartSearch->setText(QApplication::translate("Test7_4AClass", "\345\274\200\345\247\213\346\220\234\347\264\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test7_4AClass: public Ui_Test7_4AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST7_4A_H
