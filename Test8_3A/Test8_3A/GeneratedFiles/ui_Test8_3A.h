/********************************************************************************
** Form generated from reading UI file 'Test8_3A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST8_3A_H
#define UI_TEST8_3A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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

class Ui_Test8_3AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txtFileName;
    QPushButton *btnSelectFile;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSend;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test8_3AClass)
    {
        if (Test8_3AClass->objectName().isEmpty())
            Test8_3AClass->setObjectName(QStringLiteral("Test8_3AClass"));
        Test8_3AClass->resize(460, 133);
        Test8_3AClass->setMinimumSize(QSize(460, 133));
        Test8_3AClass->setMaximumSize(QSize(460, 133));
        centralWidget = new QWidget(Test8_3AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        txtFileName = new QLineEdit(centralWidget);
        txtFileName->setObjectName(QStringLiteral("txtFileName"));
        txtFileName->setDragEnabled(false);
        txtFileName->setReadOnly(true);

        horizontalLayout->addWidget(txtFileName);

        btnSelectFile = new QPushButton(centralWidget);
        btnSelectFile->setObjectName(QStringLiteral("btnSelectFile"));

        horizontalLayout->addWidget(btnSelectFile);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnSend = new QPushButton(centralWidget);
        btnSend->setObjectName(QStringLiteral("btnSend"));

        horizontalLayout_2->addWidget(btnSend);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        Test8_3AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test8_3AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 460, 23));
        Test8_3AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test8_3AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test8_3AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test8_3AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test8_3AClass->setStatusBar(statusBar);

        retranslateUi(Test8_3AClass);

        QMetaObject::connectSlotsByName(Test8_3AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test8_3AClass)
    {
        Test8_3AClass->setWindowTitle(QApplication::translate("Test8_3AClass", "\346\250\241\346\213\237\345\217\221\351\200\201\346\226\207\344\273\266", Q_NULLPTR));
        txtFileName->setText(QApplication::translate("Test8_3AClass", "\350\257\267\351\200\211\346\213\251\346\226\207\344\273\266", Q_NULLPTR));
        btnSelectFile->setText(QApplication::translate("Test8_3AClass", "\351\200\211\346\213\251\346\226\207\344\273\266", Q_NULLPTR));
        btnSend->setText(QApplication::translate("Test8_3AClass", "\345\217\221\351\200\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test8_3AClass: public Ui_Test8_3AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST8_3A_H
