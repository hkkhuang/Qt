#include "Test3_1A.h"
#include <QtWidgets/QApplication>

#include "MyWin.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
// 	Test3_1A w;
// 	w.show();

	MyWin myWin(NULL);
	myWin.resize(400, 300); //���ô�С
	myWin.move(100,100);  //ָ��λ��
	myWin.show(); //��ʾ����

	return a.exec();
}
