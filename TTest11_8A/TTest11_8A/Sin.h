#pragma once

#include <QFrame>

class Sin : public QFrame
{
	Q_OBJECT

public:
	Sin(QWidget *parent);
	~Sin();

	//调整参数
	void Adjust(int period, int grain, int radius);

	//获取坐标原点位置
	QPoint origin();

	//将GUI窗口的点(x,y)转换为坐标系统中的点
	QPoint toCoord(QPoint p);

	//将坐标系中的点(x,y)转换为GUI的坐标
	QPoint fromCoord(QPoint p);

private:
	virtual void paintEvent(QPaintEvent *event);

private:
	int m_period, m_grain, m_radius;
};
