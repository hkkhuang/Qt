#include "Test6_2.h"
#include "GBK.h"
Test6_2::Test6_2(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//建立连接
	connect(ui.btnTest, SIGNAL(clicked()), this, SLOT(OnBtnTestClicked()));
}

int Test6_2::OnBtnTestClicked()
{
	//QString str = "你好,欢迎学习";

	//GBK-->QString
	//QString str = QString::fromLocal8Bit("你好,欢迎学习");

	//QString-->GBK
	//QString text = ui.editTest->text();
	//QByteArray bytes = text.toLocal8Bit(); //GBK编码
	//const char* gbk = bytes.data();

	//ui.editTest->setText(str);

	//char text[] = "你好";
	//int size = sizeof(text);  //断点查看结果  size=5

	//char utf8[] = { 0xe4,0xbd,0xa0,0xe5,0xa5,0xbd,0};
	//QString str2 = QString::fromUtf8(utf8);


	//用户在界面上输入中文字符 转换为utf-8字节再发给其他应用程序
	//QString text = ui.editTest->text(); //获得用户数输入  类型是QString Unicode 编码
	//QByteArray bytes = text.toUtf8();  //转换为QByteArray 字节数组
	//const char* utf8 = bytes.data(); //获取到字节数组的首地址
	//int size = bytes.size(); //获得字节数组的长度


	//使用GBK类来处理中文字符
	//QString str =GBK::ToUnicode("你好中国");
	//ui.editTest->setText(str);

	string text = GBK::FromUnicode(ui.editTest->text());

	return 0;
}