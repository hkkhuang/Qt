#include "MyWin.h"

//���캯��
MyWin::MyWin(QWidget *parent)
	: QWidget(parent)
{
	m_button = new QPushButton(this); //QPushButtonҲ�Ǵ��ڣ�ÿһ�����ڴ���ʱ��Ҫָ���丸���� this��ʾ���������������
	m_button->setText("hello qt");//������ʾ�ı�
	m_button->setGeometry(100, 100, 200, 50);

	//�����ؼ�����
	m_lineEdit = new QLineEdit(this);
	m_textEdit = new QPlainTextEdit(this);

	//����������
	QVBoxLayout* layout = new QVBoxLayout(this);
	layout->addWidget(m_lineEdit); //����һ��box��ӵ�������
	layout->addWidget(m_textEdit); //���ڶ���box��ӵ�������
	layout->addWidget(m_button);

	//ʹ�ò�����
	this->setLayout(layout);


}

//��������
MyWin::~MyWin()
{
}
