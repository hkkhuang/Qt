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
//�½��ļ�
int TTest10_2A::OnMenuNew()
{
	m_filepath = "";
	ui.txtEdit->clear(); //����ı�

	//�½��ļ�ʱ�� �ļ���
	m_label->setText(GBK::ToUnicode("NewFile"));
	return 0;
}

int TTest10_2A::OnMenuOpen()
{
	//ѡ���ļ�
	QString filepath = QFileDialog::getOpenFileName(this, GBK::ToUnicode("���ļ�"));
	if (filepath.length() == 0)
	{
		return -1;
	}

	//״̬����ʾ
	m_filepath = filepath;
	m_label->setText(m_filepath);

	//��ȡ�ļ�����
	string filename = GBK::FromUnicode(filepath);
	FILE* fp = fopen(filename.c_str(), "rb");
	char buf[1024];
	int n = fread(buf, 1, 1024, fp);
	buf[n] = 0;
	fclose(fp);

	//����ȡ�ı���ʾ��������
	QString text = GBK::ToUnicode(buf);
	ui.txtEdit->setPlainText(text);

	//״̬����ʾ
	//ui.statusBar->showMessage(GBK::ToUnicode("�Ѿ���"), 1000 * 3);
	m_labelStatus->setText(GBK::ToUnicode("�Ѿ���"));

	return 0;
}

//����
int TTest10_2A::OnMenuSave()
{
	if (m_filepath.length() == 0)
	{
		QString filepath = QFileDialog::getSaveFileName(this, GBK::ToUnicode("�����ļ�"));

		if (filepath.length() == 0)
		{
			return -1;
		}
		m_filepath = filepath;
	}

	//�����ļ�
	string text = GBK::FromUnicode(ui.txtEdit->toPlainText());
	string filename = GBK::FromUnicode(m_filepath);

	FILE* fp = fopen(filename.c_str(), "wb");
	fwrite(text.c_str(), 1, text.length(), fp);
	fclose(fp);

	//״̬����ʾ
	//ui.statusBar->showMessage(GBK::ToUnicode("�ѱ���"), 1000 * 2);
	m_labelStatus->setText(GBK::ToUnicode("�ѱ���"));

	return 0;

}