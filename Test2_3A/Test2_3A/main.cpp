#include "Test2_3A.h"
#include "MyWin.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//Test2_3A w;
	//w.show();
	MyWin w(NULL); //�������� �ڴ���ʱ����NULL 
	w.resize(400, 300); //���ô�С
	w.move(100, 100);  //����λ��
	w.show(); // ��ʾ����
	return a.exec();
}
