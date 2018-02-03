/********************************************************************************
** Form generated from reading UI file 'SearchWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHWINDOW_H
#define UI_SEARCHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchWindow
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txtSearch;
    QPushButton *btnSearch;

    void setupUi(QWidget *SearchWindow)
    {
        if (SearchWindow->objectName().isEmpty())
            SearchWindow->setObjectName(QStringLiteral("SearchWindow"));
        SearchWindow->resize(628, 144);
        horizontalLayout_2 = new QHBoxLayout(SearchWindow);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        txtSearch = new QLineEdit(SearchWindow);
        txtSearch->setObjectName(QStringLiteral("txtSearch"));

        horizontalLayout->addWidget(txtSearch);

        btnSearch = new QPushButton(SearchWindow);
        btnSearch->setObjectName(QStringLiteral("btnSearch"));

        horizontalLayout->addWidget(btnSearch);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(SearchWindow);

        QMetaObject::connectSlotsByName(SearchWindow);
    } // setupUi

    void retranslateUi(QWidget *SearchWindow)
    {
        SearchWindow->setWindowTitle(QApplication::translate("SearchWindow", "SearchWindow", Q_NULLPTR));
        btnSearch->setText(QApplication::translate("SearchWindow", "\346\237\245\346\211\276", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SearchWindow: public Ui_SearchWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHWINDOW_H
