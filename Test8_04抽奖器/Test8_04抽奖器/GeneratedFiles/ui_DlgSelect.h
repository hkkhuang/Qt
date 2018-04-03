/********************************************************************************
** Form generated from reading UI file 'DlgSelect.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSELECT_H
#define UI_DLGSELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DlgSelect
{
public:
    QLabel *m_ctlDisplay;
    QPushButton *m_btnStart;
    QListWidget *m_lstResult;

    void setupUi(QDialog *DlgSelect)
    {
        if (DlgSelect->objectName().isEmpty())
            DlgSelect->setObjectName(QStringLiteral("DlgSelect"));
        DlgSelect->resize(702, 157);
        m_ctlDisplay = new QLabel(DlgSelect);
        m_ctlDisplay->setObjectName(QStringLiteral("m_ctlDisplay"));
        m_ctlDisplay->setGeometry(QRect(10, 30, 351, 111));
        QFont font;
        font.setFamily(QStringLiteral("Arial Black"));
        font.setPointSize(35);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(10);
        m_ctlDisplay->setFont(font);
        m_ctlDisplay->setStyleSheet(QLatin1String("font: 87 35pt \"Arial Black\";\n"
"color: rgb(0, 85, 0);\n"
"background-color: rgb(255, 255, 255);"));
        m_btnStart = new QPushButton(DlgSelect);
        m_btnStart->setObjectName(QStringLiteral("m_btnStart"));
        m_btnStart->setGeometry(QRect(370, 30, 71, 111));
        QIcon icon;
        icon.addFile(QStringLiteral(":/start/Resources/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_btnStart->setIcon(icon);
        m_lstResult = new QListWidget(DlgSelect);
        m_lstResult->setObjectName(QStringLiteral("m_lstResult"));
        m_lstResult->setGeometry(QRect(450, 30, 241, 111));

        retranslateUi(DlgSelect);

        QMetaObject::connectSlotsByName(DlgSelect);
    } // setupUi

    void retranslateUi(QDialog *DlgSelect)
    {
        DlgSelect->setWindowTitle(QApplication::translate("DlgSelect", "\346\212\275\345\245\226\345\231\250-\346\212\275\345\245\226", Q_NULLPTR));
        m_ctlDisplay->setText(QApplication::translate("DlgSelect", "13900000000", Q_NULLPTR));
        m_btnStart->setText(QApplication::translate("DlgSelect", "\345\274\200\345\247\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DlgSelect: public Ui_DlgSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGSELECT_H
