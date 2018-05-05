#include "TTest11_8A.h"

TTest11_8A::TTest11_8A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.spbPeriod->setValue(50);
	ui.spbGrain->setValue(1);
	ui.spbRadius->setValue(50);

	connect(ui.spbPeriod, SIGNAL(valueChanged(int)), this, SLOT(OnSettingsChanged()));
	connect(ui.spbGrain, SIGNAL(valueChanged(int)), this, SLOT(OnSettingsChanged()));
	connect(ui.spbRadius, SIGNAL(valueChanged(int)), this, SLOT(OnSettingsChanged()));

	OnSettingsChanged();
}

int TTest11_8A::OnSettingsChanged()
{
	ui.mySin->Adjust(ui.spbPeriod->value(),ui.spbGrain->value(),ui.spbRadius->value());
	return 0;
}