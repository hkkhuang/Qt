/********************************************************************************
** Form generated from reading UI file 'TTest11_1A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTEST11_1A_H
#define UI_TTEST11_1A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Circlewidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTest11_1AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    CircleWidget *frame;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TTest11_1AClass)
    {
        if (TTest11_1AClass->objectName().isEmpty())
            TTest11_1AClass->setObjectName(QStringLiteral("TTest11_1AClass"));
        TTest11_1AClass->resize(600, 400);
        centralWidget = new QWidget(TTest11_1AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new CircleWidget(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame);

        TTest11_1AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TTest11_1AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        TTest11_1AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TTest11_1AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TTest11_1AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TTest11_1AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TTest11_1AClass->setStatusBar(statusBar);

        retranslateUi(TTest11_1AClass);

        QMetaObject::connectSlotsByName(TTest11_1AClass);
    } // setupUi

    void retranslateUi(QMainWindow *TTest11_1AClass)
    {
        TTest11_1AClass->setWindowTitle(QApplication::translate("TTest11_1AClass", "TTest11_1A", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTest11_1AClass: public Ui_TTest11_1AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTEST11_1A_H
