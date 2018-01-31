#include "LoginDlg.h"

//在创建对话框的时候传入初始值
LoginDlg::LoginDlg(const char* name,QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	//设置初始值
	ui.txtName->setText(name);

	//建立连接
	connect(ui.btnOK,SIGNAL(clicked()),this, SLOT(OnBtnOKClicked()));

	connect(ui.btnCancel, SIGNAL(clicked()),this, SLOT(OnBtnCancelClicked()));
}

LoginDlg::~LoginDlg()
{
}

int LoginDlg::OnBtnOKClicked()
{
	m_name = ui.txtName->text();
	m_password = ui.txtPwd->text();

	//关闭对话框,并且让exec()返回Accepted
	accept(); //接受用户输入 返回值  返回给调用者  
	return 0;
}

int LoginDlg::OnBtnCancelClicked()
{
	reject(); //取消
	return 0;
}
