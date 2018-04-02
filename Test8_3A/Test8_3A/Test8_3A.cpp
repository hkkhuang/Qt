#include "Test8_3A.h"
#include <QFileDialog>
#include "SendDlg.h"

Test8_3A::Test8_3A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//����
	connect(ui.btnSelectFile, SIGNAL(clicked()),
		this, SLOT(OnbtnSelectFile_click()));
	connect(ui.btnSend, SIGNAL(clicked()),
		this, SLOT(OnbtnSend_click()));
}
Test8_3A::~Test8_3A()
{

}
//ѡ���ļ�
int Test8_3A::OnbtnSelectFile_click()
{
	QString filepath = QFileDialog::getOpenFileName(this, "ѡ���ļ�");
	if (filepath.length()>0)
	{
		ui.txtFileName->setText(filepath);
	}
	return 0;
}

int Test8_3A::OnbtnSend_click()
{
	//��ȡ�ļ���  ���ļ������� ���Ƚ���
	QString filepath = ui.txtFileName->text();
	SendDlg dlg(filepath,this);
	dlg.exec();
	return 0;
}