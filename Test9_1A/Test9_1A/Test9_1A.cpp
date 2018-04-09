#include "Test9_1A.h"

Test9_1A::Test9_1A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//建立连接
	connect(ui.btnSave,SIGNAL(clicked()),this,SLOT(OnBtnSave()));
}

int Test9_1A::OnBtnSave()
{
	QString name = ui.txtName->text();
	QString pwd = ui.txtPwd->text();
	bool autoLogin = ui.cbxAutoLogin->isChecked();
	bool autoSaveUserInfo = ui.cbxSaveUserInfo->isChecked();
	return 0;
}