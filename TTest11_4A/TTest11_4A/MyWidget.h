#pragma once

#include <QFrame>

class MyWidget : public QFrame
{
	Q_OBJECT

public:
	MyWidget(QWidget *parent);
	~MyWidget();

private:
	void paintEvent(QPaintEvent* event);

private:
	void simple();//简单测试
	void wrap(); //换行测试
	void dynamic(); //动态测试宽度
};
