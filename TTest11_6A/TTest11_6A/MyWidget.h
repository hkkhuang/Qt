#pragma once

#include <QFrame>
#include <QVector> //STL:vector
class MyWidget : public QFrame
{
	Q_OBJECT

public:
	MyWidget(QWidget *parent);
	~MyWidget();

private:
	void paintEvent(QPaintEvent *event);

	//鼠标支持
	void mouseDoubleClickEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
	void mousePressEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);

private:
	bool m_pressedFlag;
	QVector<QPoint> m_points; //轨迹上的点
};
