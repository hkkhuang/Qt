#include "Test7_2.h"
#include <QFileDialog>
#include "GBK.h"
#include <QDebug>
#include <QFile>

Test7_2::Test7_2(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//添加连接
	connect(ui.btnOpen, SIGNAL(clicked()), this, SLOT(OnBtnOpenCLicked()));
	connect(ui.btnSave, SIGNAL(clicked()), this, SLOT(OnBtnSaveClicked()));
}

int Test7_2::OnBtnOpenCLicked()
{
	//选择要打开的文件
	QString filepath = QFileDialog::getOpenFileName(
		this,//父窗口
		GBK::ToUnicode("选择文件") //标题Caption
	);

	//为空时表示用户取消了操作,没有选择文件
	if (filepath.length()>0)
	{
		qDebug() << filepath;  //"输出"信息中查看文件路径信息
		string gbk_name = GBK::FromUnicode(filepath);// 将读取的文件路径,转换为GBK形式
		
		//打开文件,读取内容 
		FILE* fp = fopen(gbk_name.c_str(), "rb");
		//文件的大小
		fseek(fp, 0, SEEK_END); 
		int filesize = ftell(fp);

		//读取内容
		fseek(fp, 0, SEEK_SET);
		char* buf = new char[filesize + 1];

		int n = fread(buf, 1, filesize, fp);
		if (n>0)
		{
			buf[n] = 0;
			//读取内容  转换为QString 显示到界面文本框中
			ui.plainTextEdit->setPlainText(GBK::ToUnicode(buf));
		}
		delete [] buf; //释放内存
		fclose(fp); //关闭文件


	}
	return 0;
}

//[保存]
int Test7_2::OnBtnSaveClicked()
{
	//保存文件
	QString filepath = QFileDialog::getSaveFileName(
		this,//父窗口
		GBK::ToUnicode("选择文件") //标题Caption
	);

	//
	if (filepath.length() > 0)
	{
		QString text = ui.plainTextEdit->toPlainText(); // 获取文本框字符
		string gbk_text = GBK::FromUnicode(ui.plainTextEdit->toPlainText()); //转换为GBK  C风格的字符串

		string gbk_filename = GBK::FromUnicode(filepath);// 将读取的文件路径,转换为GBK形式
		
		//打开文件
		FILE* fp = fopen(gbk_filename.c_str(), "wb");

		//写入文件
		fwrite(gbk_text.c_str(), 1,gbk_text.length(), fp);
		fclose(fp); //关闭文件


	}
	return 0;
}
