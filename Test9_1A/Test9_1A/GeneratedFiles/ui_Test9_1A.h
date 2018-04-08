/********************************************************************************
** Form generated from reading UI file 'Test9_1A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST9_1A_H
#define UI_TEST9_1A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test9_1AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *txtPwd;
    QLabel *label_2;
    QSplitter *splitter;
    QLabel *label;
    QLineEdit *txtName;
    QWidget *tab_2;
    QSplitter *splitter_2;
    QCheckBox *cbxSaveUserInfo;
    QCheckBox *cbxAutoLogin;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSave;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test9_1AClass)
    {
        if (Test9_1AClass->objectName().isEmpty())
            Test9_1AClass->setObjectName(QStringLiteral("Test9_1AClass"));
        Test9_1AClass->resize(665, 482);
        centralWidget = new QWidget(Test9_1AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        txtPwd = new QLineEdit(tab);
        txtPwd->setObjectName(QStringLiteral("txtPwd"));
        txtPwd->setGeometry(QRect(78, 90, 129, 20));
        txtPwd->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 90, 53, 20));
        splitter = new QSplitter(tab);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(20, 40, 187, 20));
        splitter->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter);
        label->setObjectName(QStringLiteral("label"));
        splitter->addWidget(label);
        txtName = new QLineEdit(splitter);
        txtName->setObjectName(QStringLiteral("txtName"));
        splitter->addWidget(txtName);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        splitter_2 = new QSplitter(tab_2);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(20, 30, 95, 32));
        splitter_2->setOrientation(Qt::Vertical);
        cbxSaveUserInfo = new QCheckBox(splitter_2);
        cbxSaveUserInfo->setObjectName(QStringLiteral("cbxSaveUserInfo"));
        splitter_2->addWidget(cbxSaveUserInfo);
        cbxAutoLogin = new QCheckBox(splitter_2);
        cbxAutoLogin->setObjectName(QStringLiteral("cbxAutoLogin"));
        splitter_2->addWidget(cbxAutoLogin);
        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(498, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnSave = new QPushButton(centralWidget);
        btnSave->setObjectName(QStringLiteral("btnSave"));

        horizontalLayout->addWidget(btnSave);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        Test9_1AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test9_1AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 665, 23));
        Test9_1AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test9_1AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test9_1AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test9_1AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test9_1AClass->setStatusBar(statusBar);

        retranslateUi(Test9_1AClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Test9_1AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test9_1AClass)
    {
        Test9_1AClass->setWindowTitle(QApplication::translate("Test9_1AClass", "Test9_1A", Q_NULLPTR));
        txtPwd->setText(QString());
        label_2->setText(QApplication::translate("Test9_1AClass", "\345\257\206  \347\240\201\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("Test9_1AClass", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Test9_1AClass", "\347\224\250\346\210\267\350\256\276\347\275\256", Q_NULLPTR));
        cbxSaveUserInfo->setText(QApplication::translate("Test9_1AClass", "\344\277\235\345\255\230\347\224\250\346\210\267\344\277\241\346\201\257", Q_NULLPTR));
        cbxAutoLogin->setText(QApplication::translate("Test9_1AClass", "\350\207\252\345\212\250\347\231\273\345\275\225", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Test9_1AClass", "\347\263\273\347\273\237\350\256\276\347\275\256", Q_NULLPTR));
        btnSave->setText(QApplication::translate("Test9_1AClass", "\344\277\235\345\255\230\350\256\276\347\275\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test9_1AClass: public Ui_Test9_1AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST9_1A_H
