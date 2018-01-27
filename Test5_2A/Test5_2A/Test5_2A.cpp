#include "Test5_2A.h"
#include <QMessageBox>

Test5_2A::Test5_2A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//连接
	connect(ui.btnOK, SIGNAL(clicked()),
		this, SLOT(OnBtnOKClicked()));

	connect(ui.editPwd, SIGNAL(returnPressed()),
		this, SLOT(OnBtnOKClicked()));
}

int Test5_2A::OnBtnOKClicked()
{
	QString name = ui.editName->text();
	QString pwd = ui.editPwd->text();
	if(name=="root" && pwd=="123")
	{
		//qDebug("Right!");
		QMessageBox::information(this, "Ok", "Right");
	} 
	else
	{
		//qDebug("Wrong!");
		QMessageBox::information(this, "Ok", "Wrong");
	}
	return 0;
}

int Test5_2A::OnReturnPressed()
{
	//QMessageBox::information(this, "Ok","return pressed...");
	OnBtnOKClicked();
	return 0;
}