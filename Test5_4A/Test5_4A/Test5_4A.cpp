#include "Test5_4A.h"
#include <QMessageBox>
Test5_4A::Test5_4A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//添加连接
	connect(ui.btnHelp, SIGNAL(clicked()),
		this, SLOT(OnBtnHelpClicked()));

	connect(ui.btnHelp, SIGNAL(toggled(bool)),
		this, SLOT(OnBtnHelpChanged(bool)));
}

int Test5_4A::OnBtnHelpClicked()
{
	QMessageBox::information(this, "OK", "This is Help!");
	return 0;
}

int Test5_4A::OnBtnHelpChanged(bool checked)
{
	if (checked)
	{
		QMessageBox::information(this, "Ok", "checked:true");
	} 
	else
	{
		QMessageBox::information(this, "Ok", "checked:false");
	}
	
	return 0;
}