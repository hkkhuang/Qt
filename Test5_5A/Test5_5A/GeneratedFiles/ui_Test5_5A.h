/********************************************************************************
** Form generated from reading UI file 'Test5_5A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST5_5A_H
#define UI_TEST5_5A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test5_5AClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test5_5AClass)
    {
        if (Test5_5AClass->objectName().isEmpty())
            Test5_5AClass->setObjectName(QStringLiteral("Test5_5AClass"));
        Test5_5AClass->resize(774, 594);
        centralWidget = new QWidget(Test5_5AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 60, 361, 51));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 255);\n"
"font: 9pt \"\351\273\221\344\275\223\";"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 160, 521, 121));
        label_2->setFrameShape(QFrame::Box);
        label_2->setWordWrap(true);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 330, 171, 141));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/Resources/octocat.png")));
        label_3->setScaledContents(true);
        Test5_5AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test5_5AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 774, 30));
        Test5_5AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test5_5AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test5_5AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test5_5AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test5_5AClass->setStatusBar(statusBar);

        retranslateUi(Test5_5AClass);

        QMetaObject::connectSlotsByName(Test5_5AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test5_5AClass)
    {
        Test5_5AClass->setWindowTitle(QApplication::translate("Test5_5AClass", "Test5_5A", Q_NULLPTR));
        label->setText(QApplication::translate("Test5_5AClass", "<<C/C++\345\255\246\344\271\240\346\214\207\345\215\227-Qt\345\255\246\344\271\240\350\257\255\346\263\225\347\257\207>>", Q_NULLPTR));
        label_2->setText(QApplication::translate("Test5_5AClass", "Python\347\232\2043.0\347\211\210\346\234\254\357\274\214\345\270\270\350\242\253\347\247\260\344\270\272Python 3000\357\274\214\346\210\226\347\256\200\347\247\260Py3k\343\200\202\347\233\270\345\257\271\344\272\216Python\347\232\204\346\227\251\346\234\237\347\211\210\346\234\254\357\274\214\350\277\231\346\230\257\344\270\200\344\270\252\350\276\203\345\244\247\347\232\204\345\215\207\347\272\247\343\200\202\344\270\272\344\272\206\344\270\215\345\270\246\345\205\245\350\277\207\345\244\232\347\232\204\347\264\257\350\265\230\357\274\214Python 3.0\345\234\250\350\256\276\350\256\241\347\232\204\346\227\266\345\200\231\346\262\241\346\234\211\350\200\203\350\231\221\345\220\221\344\270\213\345\205\274\345\256\271\343\200\202", Q_NULLPTR));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Test5_5AClass: public Ui_Test5_5AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST5_5A_H
