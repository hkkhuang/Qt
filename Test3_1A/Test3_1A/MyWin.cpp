#include "MyWin.h"

//MyWin���캯��
MyWin::MyWin(QWidget *parent)
	: QWidget(parent)
{
	//�����ؼ�����
	m_lineEdit = new QLineEdit(this);
	m_textEdit = new QPlainTextEdit(this);

	//����������
	QVBoxLayout* layout = new QVBoxLayout(this);
	layout->addWidget(m_lineEdit); //����һ��box��ӵ�������
	layout->addWidget(m_textEdit); //���ڶ���box��ӵ�������

	//ʹ�ò�����
	this->setLayout(layout);
}

MyWin::~MyWin()
{
}
