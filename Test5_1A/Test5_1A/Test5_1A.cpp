#include "Test5_1A.h"

Test5_1A::Test5_1A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//创建连接
	connect(ui.btnOK, SIGNAL(clicked()),
		this, SLOT(OnBtnOKClicked()));
}
int Test5_1A::OnBtnOKClicked()
{
	if (ui.cbxAgree->isChecked())
	{
		qDebug("Yes,It's checked!");
	}
	else
	{
		qDebug("Yes,It's not checked!");
	}
	return 0;
}