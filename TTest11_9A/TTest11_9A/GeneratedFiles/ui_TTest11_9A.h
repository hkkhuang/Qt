/********************************************************************************
** Form generated from reading UI file 'TTest11_9A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTEST11_9A_H
#define UI_TTEST11_9A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "MySeekBar.h"

QT_BEGIN_NAMESPACE

class Ui_TTest11_9AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    MySeekBar *m_seekBar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TTest11_9AClass)
    {
        if (TTest11_9AClass->objectName().isEmpty())
            TTest11_9AClass->setObjectName(QStringLiteral("TTest11_9AClass"));
        TTest11_9AClass->resize(635, 438);
        centralWidget = new QWidget(TTest11_9AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame);

        m_seekBar = new MySeekBar(centralWidget);
        m_seekBar->setObjectName(QStringLiteral("m_seekBar"));
        m_seekBar->setMinimumSize(QSize(0, 20));
        m_seekBar->setMaximumSize(QSize(16777215, 30));
        m_seekBar->setFrameShape(QFrame::StyledPanel);
        m_seekBar->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(m_seekBar);

        TTest11_9AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TTest11_9AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 635, 23));
        TTest11_9AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TTest11_9AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TTest11_9AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TTest11_9AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TTest11_9AClass->setStatusBar(statusBar);

        retranslateUi(TTest11_9AClass);

        QMetaObject::connectSlotsByName(TTest11_9AClass);
    } // setupUi

    void retranslateUi(QMainWindow *TTest11_9AClass)
    {
        TTest11_9AClass->setWindowTitle(QApplication::translate("TTest11_9AClass", "TTest11_9A", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTest11_9AClass: public Ui_TTest11_9AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTEST11_9A_H
