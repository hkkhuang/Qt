/********************************************************************************
** Form generated from reading UI file 'MyPage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYPAGE_H
#define UI_MYPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyPage
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *checkBox;

    void setupUi(QWidget *MyPage)
    {
        if (MyPage->objectName().isEmpty())
            MyPage->setObjectName(QStringLiteral("MyPage"));
        MyPage->resize(400, 300);
        pushButton = new QPushButton(MyPage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 190, 75, 23));
        label = new QLabel(MyPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 30, 161, 41));
        label->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
"font: 22pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit = new QLineEdit(MyPage);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(220, 120, 113, 20));
        checkBox = new QCheckBox(MyPage);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(80, 120, 71, 16));

        retranslateUi(MyPage);

        QMetaObject::connectSlotsByName(MyPage);
    } // setupUi

    void retranslateUi(QWidget *MyPage)
    {
        MyPage->setWindowTitle(QApplication::translate("MyPage", "MyPage", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MyPage", "\344\277\235\345\255\230\350\256\276\347\275\256", Q_NULLPTR));
        label->setText(QApplication::translate("MyPage", "\350\277\231\346\230\257\347\254\254\344\270\211\351\241\265", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MyPage", "\350\207\252\345\212\250\344\277\235\345\255\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyPage: public Ui_MyPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYPAGE_H
