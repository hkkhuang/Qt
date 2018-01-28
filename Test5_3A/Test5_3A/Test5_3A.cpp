#include "Test5_3A.h"
#include <QMessageBox>

Test5_3A::Test5_3A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.cmboxLang->addItem("Chinese","ch"); //添加数据项  并设置data
	ui.cmboxLang->addItem("English","en");
	ui.cmboxLang->addItem("French","fr");

	ui.cmboxLang->insertItem(2,"Kerean","kr");//在第二个位置插入一项 默认从0开始编号

	//创建关联
	connect(ui.btnOK, SIGNAL(clicked()),
		this, SLOT(OnBtnOKClicked()));

	connect(ui.cmboxLang, SIGNAL(currentIndexChanged(int)),
		this, SLOT(OnLangChanged(int)));


}

int Test5_3A::OnBtnOKClicked()
{
	int index = ui.cmboxLang->currentIndex();//当前选项
	QString data = ui.cmboxLang->itemData(index).toString();
	QString text = ui.cmboxLang->itemText(index);
	return 0;
}

int Test5_3A::OnLangChanged(int index)
{
	QMessageBox::information(this,"Ok","Selected:" + ui.cmboxLang->currentText());
	return 0;
}