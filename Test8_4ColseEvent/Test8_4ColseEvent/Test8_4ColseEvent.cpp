#include "Test8_4ColseEvent.h"
#include <QMessageBox>
#include "GBK.h"
#include <QCloseEvent>

Test8_4ColseEvent::Test8_4ColseEvent(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void Test8_4ColseEvent::closeEvent(QCloseEvent* event)
{
	QMessageBox::StandardButton button;
	button = QMessageBox::question(this, GBK::ToUnicode("�˳�"), GBK::ToUnicode("ȷ���˳���"), QMessageBox::Yes | QMessageBox::No);

	if (button == QMessageBox::Yes)
	{
		event->accept(); // �����˳��źţ������˳� 
	} 
	else if(button == QMessageBox::No)
	{
		event->ignore(); //�����˳��ź�  �����������
	}
}