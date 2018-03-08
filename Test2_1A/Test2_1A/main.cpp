#include "Test2_1A.h"
#include <QtWidgets>
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Test2_1A w;
	w.show();
	//QWidget* w=new QWidget();
	//w->setGeometry(100, 100, 400, 400);//设置窗体大小 通过setGeometry()设置的窗体坐标不包含窗体外边框，标题栏等大小，只是内部显示大小
	//w->setWindowTitle("Hello World!\n"); //设置窗体标题
	//w->move(0, 0); //移动窗体到指定坐标位置 是将窗体的外边框坐标位置
	//w->show();//显示窗口
	return a.exec();
}
