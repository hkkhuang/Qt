#include "Test8_3A.h"
#include <QFileDialog>
#include "SendDlg.h"

Test8_3A::Test8_3A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//连接
	connect(ui.btnSelectFile, SIGNAL(clicked()),
		this, SLOT(OnbtnSelectFile_click()));
	connect(ui.btnSend, SIGNAL(clicked()),
		this, SLOT(OnbtnSend_click()));
}
Test8_3A::~Test8_3A()
{

}
//选择文件
int Test8_3A::OnbtnSelectFile_click()
{
	QString filepath = QFileDialog::getOpenFileName(this, "选择文件");
	if (filepath.length()>0)
	{
		ui.txtFileName->setText(filepath);
	}
	return 0;
}

int Test8_3A::OnbtnSend_click()
{
	//获取文件名  将文件名传给 进度界面
	QString filepath = ui.txtFileName->text();
	SendDlg dlg(filepath,this);
	dlg.exec();
	return 0;
}