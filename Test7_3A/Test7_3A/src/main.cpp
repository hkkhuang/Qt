#include "Test7_3A.h"
#include <QtWidgets/QApplication>
#include "CurrentDir.h"

int main(int argc, char *argv[])
{
	//���õ�ǰĿ¼
	CurrentDir::cd();

	QApplication a(argc, argv);
	Test7_3A w;
	w.show();
	return a.exec();
}
