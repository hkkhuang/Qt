#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test8_3A.h"

class Test8_3A : public QMainWindow
{
	Q_OBJECT

public:
	Test8_3A(QWidget *parent = Q_NULLPTR);
	~Test8_3A();
//��Ӳ�
private slots:
	int OnbtnSelectFile_click();  //ѡ���ļ�
	int OnbtnSend_click(); //�����ļ�

private:
	Ui::Test8_3AClass ui;
};
