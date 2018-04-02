#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test8_3A.h"

class Test8_3A : public QMainWindow
{
	Q_OBJECT

public:
	Test8_3A(QWidget *parent = Q_NULLPTR);
	~Test8_3A();
//添加槽
private slots:
	int OnbtnSelectFile_click();  //选择文件
	int OnbtnSend_click(); //发送文件

private:
	Ui::Test8_3AClass ui;
};
