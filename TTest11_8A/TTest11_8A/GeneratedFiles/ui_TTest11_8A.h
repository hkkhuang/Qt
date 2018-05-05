/********************************************************************************
** Form generated from reading UI file 'TTest11_8A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTEST11_8A_H
#define UI_TTEST11_8A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Sin.h"

QT_BEGIN_NAMESPACE

class Ui_TTest11_8AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spbPeriod;
    QLabel *label_2;
    QSpinBox *spbGrain;
    QLabel *label_3;
    QSpinBox *spbRadius;
    QSpacerItem *horizontalSpacer;
    Sin *mySin;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TTest11_8AClass)
    {
        if (TTest11_8AClass->objectName().isEmpty())
            TTest11_8AClass->setObjectName(QStringLiteral("TTest11_8AClass"));
        TTest11_8AClass->resize(600, 344);
        centralWidget = new QWidget(TTest11_8AClass);
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

        spbPeriod = new QSpinBox(centralWidget);
        spbPeriod->setObjectName(QStringLiteral("spbPeriod"));

        horizontalLayout->addWidget(spbPeriod);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        spbGrain = new QSpinBox(centralWidget);
        spbGrain->setObjectName(QStringLiteral("spbGrain"));

        horizontalLayout->addWidget(spbGrain);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        spbRadius = new QSpinBox(centralWidget);
        spbRadius->setObjectName(QStringLiteral("spbRadius"));

        horizontalLayout->addWidget(spbRadius);

        horizontalSpacer = new QSpacerItem(238, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        mySin = new Sin(centralWidget);
        mySin->setObjectName(QStringLiteral("mySin"));
        mySin->setFrameShape(QFrame::StyledPanel);
        mySin->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(mySin);

        TTest11_8AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TTest11_8AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        TTest11_8AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TTest11_8AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TTest11_8AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TTest11_8AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TTest11_8AClass->setStatusBar(statusBar);

        retranslateUi(TTest11_8AClass);

        QMetaObject::connectSlotsByName(TTest11_8AClass);
    } // setupUi

    void retranslateUi(QMainWindow *TTest11_8AClass)
    {
        TTest11_8AClass->setWindowTitle(QApplication::translate("TTest11_8AClass", "TTest11_8A", Q_NULLPTR));
        label->setText(QApplication::translate("TTest11_8AClass", "\345\221\250\346\234\237:", Q_NULLPTR));
        label_2->setText(QApplication::translate("TTest11_8AClass", "\347\262\222\345\255\220:", Q_NULLPTR));
        label_3->setText(QApplication::translate("TTest11_8AClass", "\346\214\257\345\271\205:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTest11_8AClass: public Ui_TTest11_8AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTEST11_8A_H
