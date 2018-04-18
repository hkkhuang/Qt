#include "TTest10_2A.h"
#include <QFileDialog>
#include "GBK.h"
#include <QLabel>
TTest10_2A::TTest10_2A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	m_label = new QLabel();
	m_labelStatus = new QLabel();
	ui.statusBar->addWidget(m_labelStatus);
	ui.statusBar->addWidget(m_label);
	//ui.statusBar->insertWidget(2, m_label);
	connect(ui.actionNew, SIGNAL(triggered()), this, SLOT(OnMenuNew()));
	connect(ui.actionOpen, SIGNAL(triggered()), this, SLOT(OnMenuOpen()));
	connect(ui.actionSave, SIGNAL(triggered()), this, SLOT(OnMenuSave()));
}
//新建文件
int TTest10_2A::OnMenuNew()
{
	m_filepath = "";
	ui.txtEdit->clear(); //清空文本

	//新建文件时候 文件名
	m_label->setText(GBK::ToUnicode("NewFile"));
	return 0;
}

int TTest10_2A::OnMenuOpen()
{
	//选中文件
	QString filepath = QFileDialog::getOpenFileName(this, GBK::ToUnicode("打开文件"));
	if (filepath.length() == 0)
	{
		return -1;
	}

	//状态栏显示
	m_filepath = filepath;
	m_label->setText(m_filepath);

	//读取文件内容
	string filename = GBK::FromUnicode(filepath);
	FILE* fp = fopen(filename.c_str(), "rb");
	char buf[1024];
	int n = fread(buf, 1, 1024, fp);
	buf[n] = 0;
	fclose(fp);

	//将读取文本显示到界面中
	QString text = GBK::ToUnicode(buf);
	ui.txtEdit->setPlainText(text);

	//状态栏显示
	//ui.statusBar->showMessage(GBK::ToUnicode("已经打开"), 1000 * 3);
	m_labelStatus->setText(GBK::ToUnicode("已经打开"));

	return 0;
}

//保存
int TTest10_2A::OnMenuSave()
{
	if (m_filepath.length() == 0)
	{
		QString filepath = QFileDialog::getSaveFileName(this, GBK::ToUnicode("保存文件"));

		if (filepath.length() == 0)
		{
			return -1;
		}
		m_filepath = filepath;
	}

	//保存文件
	string text = GBK::FromUnicode(ui.txtEdit->toPlainText());
	string filename = GBK::FromUnicode(m_filepath);

	FILE* fp = fopen(filename.c_str(), "wb");
	fwrite(text.c_str(), 1, text.length(), fp);
	fclose(fp);

	//状态栏显示
	//ui.statusBar->showMessage(GBK::ToUnicode("已保存"), 1000 * 2);
	m_labelStatus->setText(GBK::ToUnicode("已保存"));

	return 0;

}