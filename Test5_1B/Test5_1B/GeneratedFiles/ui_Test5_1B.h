/********************************************************************************
** Form generated from reading UI file 'Test5_1B.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST5_1B_H
#define UI_TEST5_1B_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test5_1BClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QCheckBox *cbxAgree;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnNext;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test5_1BClass)
    {
        if (Test5_1BClass->objectName().isEmpty())
            Test5_1BClass->setObjectName(QStringLiteral("Test5_1BClass"));
        Test5_1BClass->resize(914, 688);
        centralWidget = new QWidget(Test5_1BClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cbxAgree = new QCheckBox(centralWidget);
        cbxAgree->setObjectName(QStringLiteral("cbxAgree"));

        horizontalLayout->addWidget(cbxAgree);

        horizontalSpacer = new QSpacerItem(538, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnNext = new QPushButton(centralWidget);
        btnNext->setObjectName(QStringLiteral("btnNext"));
        btnNext->setEnabled(false);

        horizontalLayout->addWidget(btnNext);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        Test5_1BClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test5_1BClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 914, 30));
        Test5_1BClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test5_1BClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test5_1BClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test5_1BClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test5_1BClass->setStatusBar(statusBar);

        retranslateUi(Test5_1BClass);

        QMetaObject::connectSlotsByName(Test5_1BClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test5_1BClass)
    {
        Test5_1BClass->setWindowTitle(QApplication::translate("Test5_1BClass", "Test5_1B", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("Test5_1BClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600;\">\347\275\221\346\230\223\351\202\256\347\256\261\345\270\220\345\217\267\346\234\215\345\212\241\346\235\241\346\254\276</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\254\242\350\277\216\347\224\263\350\257\267\344\275\277\347\224\250\347\275\221\346"
                        "\230\223\345\205\254\345\217\270\345\217\212\345\205\266\344\273\226\345\220\210\344\275\234\350\277\220\350\220\245\344\270\273\344\275\223\357\274\210\344\270\213\345\210\227\347\256\200\347\247\260\344\270\272\342\200\234\347\275\221\346\230\223\345\205\254\345\217\270\342\200\235\346\210\226\342\200\234\347\275\221\346\230\223\342\200\235\357\274\211\346\217\220\344\276\233\347\232\204\346\234\215\345\212\241\343\200\202\350\257\267\346\202\250\357\274\210\344\270\213\345\210\227\347\256\200\347\247\260\344\270\272\342\200\234\347\224\250\346\210\267\342\200\235\357\274\211\344\273\224\347\273\206\351\230\205\350\257\273\344\273\245\344\270\213\345\205\250\351\203\250\345\206\205\345\256\271\357\274\210\347\211\271\345\210\253\346\230\257\347\262\227\344\275\223\344\270\213\345\210\222\347\272\277\346\240\207\346\263\250\347\232\204\345\206\205\345\256\271\357\274\211\343\200\202\345\246\202\347\224\250\346\210\267\344\270\215\345\220\214\346\204\217\346\234\254\346\234\215\345\212\241\346\235\241\346\254\276"
                        "\344\273\273\346\204\217\345\206\205\345\256\271\357\274\214\350\257\267\345\213\277\346\263\250\345\206\214\346\210\226\344\275\277\347\224\250\347\275\221\346\230\223\346\234\215\345\212\241\343\200\202\345\246\202\347\224\250\346\210\267\351\200\232\350\277\207\350\277\233\345\205\245\346\263\250\345\206\214\347\250\213\345\272\217\345\271\266\345\213\276\351\200\211\342\200\234\346\210\221\345\220\214\346\204\217\347\275\221\346\230\223\351\202\256\347\256\261\345\270\220\345\217\267\346\234\215\345\212\241\346\235\241\346\254\276\342\200\235\357\274\214\345\215\263\350\241\250\347\244\272\347\224\250\346\210\267\344\270\216\347\275\221\346\230\223\345\205\254\345\217\270\345\267\262\350\276\276\346\210\220\345\215\217\350\256\256\357\274\214\350\207\252\346\204\277\346\216\245\345\217\227\346\234\254\346\234\215\345\212\241\346\235\241\346\254\276\347\232\204\346\211\200\346\234\211\345\206\205\345\256\271\343\200\202\346\255\244\345\220\216\357\274\214\347\224\250\346\210\267\344\270\215\345\276\227\344\273"
                        "\245\346\234\252\351\230\205\350\257\273\346\234\254\346\234\215\345\212\241\346\235\241\346\254\276\345\206\205\345\256\271\344\275\234\344\273\273\344\275\225\345\275\242\345\274\217\347\232\204\346\212\227\350\276\251\343\200\202</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1.\346\234\215\345\212\241\346\235\241\346\254\276\347\232\204\347\241\256\350\256\244\345\222\214\346\216\245\347\272\263</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\275\221\346\230\223\346\234\215\345\212\241\346\266\211\345\217\212\345\210\260\347\232"
                        "\204\347\275\221\346\230\223\344\272\247\345\223\201\347\232\204\346\211\200\346\234\211\346\235\203\344\273\245\345\217\212\347\233\270\345\205\263\350\275\257\344\273\266\347\232\204\347\237\245\350\257\206\344\272\247\346\235\203\345\275\222\347\275\221\346\230\223\345\205\254\345\217\270\346\211\200\346\234\211\343\200\202\347\275\221\346\230\223\345\205\254\345\217\270\346\211\200\346\217\220\344\276\233\347\232\204\346\234\215\345\212\241\345\277\205\351\241\273\346\214\211\347\205\247\345\205\266\345\217\221\345\270\203\347\232\204\345\205\254\345\217\270\347\253\240\347\250\213\357\274\214\346\234\215\345\212\241\346\235\241\346\254\276\345\222\214\346\223\215\344\275\234\350\247\204\345\210\231\344\270\245\346\240\274\346\211\247\350\241\214\343\200\202\346\234\254\346\234\215\345\212\241\346\235\241\346\254\276\347\232\204\346\225\210\345\212\233\350\214\203\345\233\264\345\217\212\344\272\216\347\275\221\346\230\223\345\205\254\345\217\270\347\232\204\344\270\200\345\210\207\344\272\247\345\223\201\345"
                        "\222\214\346\234\215\345\212\241\357\274\214\347\224\250\346\210\267\345\234\250\344\272\253\345\217\227\347\275\221\346\230\223\345\205\254\345\217\270\344\273\273\344\275\225\345\215\225\351\241\271\346\234\215\345\212\241\346\227\266\357\274\214\345\272\224\345\275\223\345\217\227\346\234\254\346\234\215\345\212\241\346\235\241\346\254\276\347\232\204\347\272\246\346\235\237\343\200\202</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\275\223\347\224\250\346\210\267\344\275\277\347\224\250\347\275\221\346\230\223\345\220\204\345\215\225\351\241\271\346\234\215\345\212\241\346\227\266\357\274\214\347\224\250\346\210\267\345\220\214\346\204\217\344\273\245\345\215\225\351\241\271\346\234\215\345\212\241\350\246\201\346\261\202\347\232\204\346\226\271\345\274\217\345\220"
                        "\214\346\204\217\350\257\245\345\215\225\351\241\271\346\234\215\345\212\241\347\232\204\346\234\215\345\212\241\346\235\241\346\254\276\344\273\245\345\217\212\347\275\221\346\230\223\345\205\254\345\217\270\345\234\250\350\257\245\345\215\225\351\241\271\346\234\215\345\212\241\344\270\255\345\217\221\345\207\272\347\232\204\345\220\204\347\261\273\345\205\254\345\221\212\357\274\210\344\270\213\345\210\227\347\256\200\347\247\260\344\270\272\342\200\234\345\215\225\351\241\271\346\235\241\346\254\276\342\200\235\357\274\211\357\274\214\345\234\250\346\255\244\346\203\205\345\206\265\344\270\213\345\215\225\351\241\271\346\235\241\346\254\276\344\270\216\346\234\254\346\234\215\345\212\241\346\235\241\346\254\276\345\220\214\346\227\266\345\257\271\347\224\250\346\210\267\344\272\247\347\224\237\346\225\210\345\212\233\343\200\202\350\213\245\345\215\225\351\241\271\346\235\241\346\254\276\344\270\216\346\234\254\346\234\215\345\212\241\346\235\241\346\254\276\345\255\230\345\234\250\345\220\214\347\261\273\346"
                        "\235\241\346\254\276\347\232\204\345\206\262\347\252\201\357\274\214\345\210\231\345\234\250\345\215\225\351\241\271\346\235\241\346\254\276\347\272\246\346\235\237\350\214\203\345\233\264\345\206\205\345\272\224\344\273\245\345\215\225\351\241\271\346\235\241\346\254\276\344\270\272\345\207\206\343\200\202</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2.\347\275\221\346\230\223\351\202\256\347\256\261\345\270\220\345\217\267\346\234\215\345\212\241\347\256\200\344\273\213</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\234\254\346"
                        "\234\215\345\212\241\346\235\241\346\254\276\346\211\200\347\247\260\347\232\204\342\200\234\347\275\221\346\230\223\351\202\256\347\256\261\345\270\220\345\217\267\342\200\235\346\230\257\346\214\207\347\224\250\346\210\267\346\263\250\345\206\214\347\232\204\345\220\210\346\263\225\343\200\201\346\234\211\346\225\210\347\232\204\345\270\220\345\217\267\357\274\214\345\214\205\346\213\254</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\357\274\2101\357\274\211\344\273\245\342\200\234\347\275\221\346\230\223\351\202\256\347\256\261\342\200\235\346\263\250\345\206\214\347\232\204\345\270\220\345\217\267\357\274\210\345\220\253\344\273\245@163.com\357\274\214@126.com\357\274\214 @yeah.net\347\255\211\344\270\272\345\220\216\347\274\200\347\232\204\342\200\234\347\275\221\346"
                        "\230\223\345\205\215\350\264\271\351\202\256\347\256\261\342\200\235\345\222\214\344\273\245@vip.163.com\357\274\214@vip.126.com\357\274\214@188.com\357\274\214@vip.188.com\347\255\211\344\270\272\345\220\216\347\274\200\347\232\204\342\200\234\347\275\221\346\230\223\346\224\266\350\264\271\351\202\256\347\256\261\342\200\235\357\274\211\357\274\233</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\357\274\2102\357\274\211\344\273\245\347\275\221\346\230\223popo\345\270\220\345\217\267\357\274\210@popo.163.com\347\255\211\357\274\211\346\263\250\345\206\214\347\232\204\345\270\220\345\217\267\357\274\233</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p"
                        " style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\357\274\2103\357\274\211\344\273\245\347\275\221\346\230\223\345\205\254\345\217\270\350\256\244\345\217\257\347\232\204\345\205\266\344\273\226\342\200\234\351\235\236\347\275\221\346\230\223\351\202\256\347\256\261\342\200\235\346\263\250\345\206\214\347\232\204\345\270\220\345\217\267\343\200\202</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\275\221\346\230\223\345\205\254\345\217\270\350\277\220\347\224\250\350\207\252\345\267\261\347\232\204\346\223\215\344\275\234\347\263\273\347\273\237\351\200\232\350\277\207\345\233\275\351\231\205\344\272\222\350\201\224\347\275\221\347\273\234\344\270\272\347\224\250\346\210\267\346\217\220\344\276\233\345"
                        "\220\204\351\241\271\346\234\215\345\212\241\343\200\202\347\224\250\346\210\267\345\277\205\351\241\273\357\274\232</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\357\274\2101\357\274\211\346\217\220\344\276\233\350\256\276\345\244\207\357\274\214\345\246\202\344\270\252\344\272\272\347\224\265\350\204\221\343\200\201\346\211\213\346\234\272\346\210\226\345\205\266\344\273\226\344\270\212\347\275\221\350\256\276\345\244\207\343\200\202</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\357\274\2102\357\274\211\344\270\252\344\272\272\344"
                        "\270\212\347\275\221\345\222\214\346\224\257\344\273\230\344\270\216\346\255\244\346\234\215\345\212\241\346\234\211\345\205\263\347\232\204\350\264\271\347\224\250\343\200\202</p></body></html>", Q_NULLPTR));
        cbxAgree->setText(QApplication::translate("Test5_1BClass", "\345\220\214\346\204\217\346\234\254\345\215\217\350\256\256", Q_NULLPTR));
        btnNext->setText(QApplication::translate("Test5_1BClass", "\344\270\213\344\270\200\346\255\245", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Test5_1BClass", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test5_1BClass: public Ui_Test5_1BClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST5_1B_H
