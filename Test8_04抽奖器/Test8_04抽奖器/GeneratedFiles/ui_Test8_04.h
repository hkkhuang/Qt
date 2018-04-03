/********************************************************************************
** Form generated from reading UI file 'Test8_04.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST8_04_H
#define UI_TEST8_04_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test8_04Class
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_btnEnter;
    QListWidget *m_lstNumbers;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test8_04Class)
    {
        if (Test8_04Class->objectName().isEmpty())
            Test8_04Class->setObjectName(QStringLiteral("Test8_04Class"));
        Test8_04Class->resize(557, 320);
        centralWidget = new QWidget(Test8_04Class);
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

        horizontalSpacer = new QSpacerItem(198, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_btnEnter = new QPushButton(centralWidget);
        m_btnEnter->setObjectName(QStringLiteral("m_btnEnter"));

        horizontalLayout->addWidget(m_btnEnter);


        verticalLayout->addLayout(horizontalLayout);

        m_lstNumbers = new QListWidget(centralWidget);
        m_lstNumbers->setObjectName(QStringLiteral("m_lstNumbers"));

        verticalLayout->addWidget(m_lstNumbers);

        Test8_04Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test8_04Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 557, 23));
        Test8_04Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test8_04Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test8_04Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test8_04Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test8_04Class->setStatusBar(statusBar);

        retranslateUi(Test8_04Class);

        QMetaObject::connectSlotsByName(Test8_04Class);
    } // setupUi

    void retranslateUi(QMainWindow *Test8_04Class)
    {
        Test8_04Class->setWindowTitle(QApplication::translate("Test8_04Class", "Demo \346\212\275\345\245\226\345\231\250", Q_NULLPTR));
        label->setText(QApplication::translate("Test8_04Class", "\346\211\213\346\234\272\345\217\267\345\210\227\350\241\250\357\274\232", Q_NULLPTR));
        m_btnEnter->setText(QApplication::translate("Test8_04Class", "\350\277\233\345\205\245\346\212\275\345\245\226", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test8_04Class: public Ui_Test8_04Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST8_04_H
