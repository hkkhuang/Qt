/********************************************************************************
** Form generated from reading UI file 'DlgTest.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGTEST_H
#define UI_DLGTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_DlgTest
{
public:

    void setupUi(QDialog *DlgTest)
    {
        if (DlgTest->objectName().isEmpty())
            DlgTest->setObjectName(QStringLiteral("DlgTest"));
        DlgTest->resize(400, 300);

        retranslateUi(DlgTest);

        QMetaObject::connectSlotsByName(DlgTest);
    } // setupUi

    void retranslateUi(QDialog *DlgTest)
    {
        DlgTest->setWindowTitle(QApplication::translate("DlgTest", "DlgTest", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DlgTest: public Ui_DlgTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGTEST_H
