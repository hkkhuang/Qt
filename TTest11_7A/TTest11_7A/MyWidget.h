#pragma once

#include <QFrame>
#include <QMouseEvent>
#include <QPixmap>
#include <QVector> 

class MyWidget : public QFrame
{
	Q_OBJECT

public:
	MyWidget(QWidget *parent);
	~MyWidget();

//声明信号 像函数原型一样
signals:
	void selected(QRect area);

private:
	void paintEvent(QPaintEvent *event);

	//鼠标支持
	void mouseMoveEvent(QMouseEvent *event);
	void mousePressEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);

private:
	bool m_pressedFlag;  //鼠标状态标识量
	QPixmap m_picture;  //图片
	QPoint m_curPos;//鼠标当前位置
	QPoint m_start, m_end; //绘制选取 记录开始点坐标(左上角).结束点坐标(右下角)
};
