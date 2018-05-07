/********************************************************************************
** Form generated from reading UI file 'TTest11_10AScreenCapture.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTEST11_10ASCREENCAPTURE_H
#define UI_TTEST11_10ASCREENCAPTURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "MyPicture.h"

QT_BEGIN_NAMESPACE

class Ui_TTest11_10AScreenCaptureClass
{
public:
    QAction *actionCapture;
    QAction *actionSave;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    MyPicture *frame;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TTest11_10AScreenCaptureClass)
    {
        if (TTest11_10AScreenCaptureClass->objectName().isEmpty())
            TTest11_10AScreenCaptureClass->setObjectName(QStringLiteral("TTest11_10AScreenCaptureClass"));
        TTest11_10AScreenCaptureClass->resize(620, 508);
        actionCapture = new QAction(TTest11_10AScreenCaptureClass);
        actionCapture->setObjectName(QStringLiteral("actionCapture"));
        actionSave = new QAction(TTest11_10AScreenCaptureClass);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        centralWidget = new QWidget(TTest11_10AScreenCaptureClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(9, 9, 9, 9);
        frame = new MyPicture(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame);

        TTest11_10AScreenCaptureClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(TTest11_10AScreenCaptureClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TTest11_10AScreenCaptureClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TTest11_10AScreenCaptureClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TTest11_10AScreenCaptureClass->setStatusBar(statusBar);

        mainToolBar->addAction(actionCapture);
        mainToolBar->addAction(actionSave);

        retranslateUi(TTest11_10AScreenCaptureClass);

        QMetaObject::connectSlotsByName(TTest11_10AScreenCaptureClass);
    } // setupUi

    void retranslateUi(QMainWindow *TTest11_10AScreenCaptureClass)
    {
        TTest11_10AScreenCaptureClass->setWindowTitle(QApplication::translate("TTest11_10AScreenCaptureClass", "Demo008", Q_NULLPTR));
        actionCapture->setText(QApplication::translate("TTest11_10AScreenCaptureClass", "\346\210\252\345\233\276", Q_NULLPTR));
        actionSave->setText(QApplication::translate("TTest11_10AScreenCaptureClass", "\344\277\235\345\255\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTest11_10AScreenCaptureClass: public Ui_TTest11_10AScreenCaptureClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTEST11_10ASCREENCAPTURE_H
