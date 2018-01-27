#include "Test5_1B.h"

Test5_1B::Test5_1B(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//信号槽连接
	connect(ui.cbxAgree, SIGNAL(stateChanged(int)),
		this, SLOT(OnCheckChanged()));
}

int Test5_1B::OnCheckChanged()
{
	if (ui.cbxAgree->isChecked())
	{
		ui.btnNext->setEnabled(true);
	} 
	else
	{
		ui.btnNext->setEnabled(false);
	}
	
	return 0;
}