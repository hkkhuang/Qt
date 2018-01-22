#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>

int main(int argc, char *argv[])
{
	QApplication a(argc,argv);
	QLabel label("Hello World");
	label.show();
	return a.exec();
}

//Qt5中QtGui是 QtWidgets 中文