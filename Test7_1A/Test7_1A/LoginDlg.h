#pragma once

#include <QDialog>
#include "ui_LoginDlg.h"

class LoginDlg : public QDialog
{
	Q_OBJECT

public:
	LoginDlg(const char* name, QWidget *parent = Q_NULLPTR);
	~LoginDlg();

//添加槽
private slots:
	int OnBtnOKClicked();
	int OnBtnCancelClicked();


private:
	Ui::LoginDlg ui;

public:
	QString m_name;
	QString m_password;
};
