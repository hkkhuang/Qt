/********************************************************************************
** Form generated from reading UI file 'Mywin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIN_H
#define UI_MYWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mywin
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Mywin)
    {
        if (Mywin->objectName().isEmpty())
            Mywin->setObjectName(QStringLiteral("Mywin"));
        Mywin->resize(772, 592);
        verticalLayout = new QVBoxLayout(Mywin);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit = new QLineEdit(Mywin);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(Mywin);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        plainTextEdit = new QPlainTextEdit(Mywin);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);


        retranslateUi(Mywin);

        QMetaObject::connectSlotsByName(Mywin);
    } // setupUi

    void retranslateUi(QWidget *Mywin)
    {
        Mywin->setWindowTitle(QApplication::translate("Mywin", "Mywin", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Mywin", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Mywin: public Ui_Mywin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIN_H
