#include "Test7_1A.h"
//引入头文件
#include "LoginDlg.h"
#include <QDebug>

Test7_1A::Test7_1A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//创建连接
	connect(ui.btnLogin, SIGNAL(clicked()),this, SLOT(OnBtnLoginClicked()));
}

int Test7_1A::OnBtnLoginClicked()
{
	//显示对话框
	LoginDlg dlg("hkk",this); //设置父窗口
	int ret = dlg.exec();//执行  对话框显示 程序阻塞  直到用户点击确定或者取消
	if (ret == QDialog::Accepted) //用户点击  确定
	{
		//当用户输入[确定]时,取得用户的输入
		qDebug() << dlg.m_name;
		qDebug() << dlg.m_password;
	}
	else
	{
		//用户选择[取消]
	}
	return 0;
}
