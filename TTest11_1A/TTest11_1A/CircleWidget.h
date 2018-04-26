#pragma once

#include <QFrame>

class CircleWidget : public QFrame
{
	Q_OBJECT

public:
	CircleWidget(QWidget *parent);
	~CircleWidget();

	
private:
	//定义画圆函数原型
	void paintEvent(QPaintEvent* event);
};
