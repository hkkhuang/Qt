/********************************************************************************
** Form generated from reading UI file 'Test9_2A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST9_2A_H
#define UI_TEST9_2A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test9_2AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *btnPage1;
    QPushButton *btnPage2;
    QPushButton *btnPage3;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *textBrowser_2;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test9_2AClass)
    {
        if (Test9_2AClass->objectName().isEmpty())
            Test9_2AClass->setObjectName(QStringLiteral("Test9_2AClass"));
        Test9_2AClass->resize(1487, 863);
        centralWidget = new QWidget(Test9_2AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnPage1 = new QPushButton(centralWidget);
        btnPage1->setObjectName(QStringLiteral("btnPage1"));

        verticalLayout->addWidget(btnPage1);

        btnPage2 = new QPushButton(centralWidget);
        btnPage2->setObjectName(QStringLiteral("btnPage2"));

        verticalLayout->addWidget(btnPage2);

        btnPage3 = new QPushButton(centralWidget);
        btnPage3->setObjectName(QStringLiteral("btnPage3"));

        verticalLayout->addWidget(btnPage3);

        verticalSpacer = new QSpacerItem(20, 238, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        horizontalLayout_2 = new QHBoxLayout(page);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        textBrowser_2 = new QTextBrowser(page);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));

        horizontalLayout_2->addWidget(textBrowser_2);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_3 = new QVBoxLayout(page_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/Resources/2013-01-09.jpg")));
        label->setScaledContents(true);

        verticalLayout_3->addWidget(label);

        stackedWidget->addWidget(page_2);

        horizontalLayout->addWidget(stackedWidget);


        verticalLayout_2->addLayout(horizontalLayout);

        Test9_2AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test9_2AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1487, 23));
        Test9_2AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test9_2AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test9_2AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test9_2AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test9_2AClass->setStatusBar(statusBar);

        retranslateUi(Test9_2AClass);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Test9_2AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test9_2AClass)
    {
        Test9_2AClass->setWindowTitle(QApplication::translate("Test9_2AClass", "Test9_2A", Q_NULLPTR));
        btnPage1->setText(QApplication::translate("Test9_2AClass", "Page 1", Q_NULLPTR));
        btnPage2->setText(QApplication::translate("Test9_2AClass", "Page 2", Q_NULLPTR));
        btnPage3->setText(QApplication::translate("Test9_2AClass", "page 3", Q_NULLPTR));
        textBrowser_2->setHtml(QApplication::translate("Test9_2AClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\277\231\346\230\257\347\254\2541\351\241\265</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\277\231\346\230\257\347\254\2541\351\241\265</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\277\231\346\230\257\347\254\2541\351\241\265</p></body></html>", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Test9_2AClass: public Ui_Test9_2AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST9_2A_H
