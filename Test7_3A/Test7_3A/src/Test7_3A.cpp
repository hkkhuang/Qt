#include "Test7_3A.h"
#include <stdio.h>

Test7_3A::Test7_3A(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//�����ļ�
	FILE* fp = fopen("123.txt", "wb");
	fwrite("hello", 1, 5, fp);
	fclose(fp);
}
