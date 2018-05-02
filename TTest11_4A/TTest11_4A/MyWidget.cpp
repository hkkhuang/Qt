#include <QWidget>
#include "MyWidget.h"
#include "GBK.h"
#include <QPainter>
#include <QTimerEvent>
#include <QFontMetrics>
#include <QDebug>

MyWidget::MyWidget(QWidget *parent)
	: QFrame(parent)
{

}

MyWidget::~MyWidget()
{
}

//简单测试
void MyWidget::simple()
{
	QPainter painter(this);
	int width = this->width();
	int height = this->height();

	//设置颜色
	painter.setPen(QColor(0x00, 0x00, 0x00));

	//设置字体
	painter.setFont((QFont("Times", 14, QFont::Bold, true))); //参数依次为：字体 字号 是否加粗 是否倾斜

	//QFont font("Times", 14, QFont::Bold, true);
	//painter.setFont(font);

	//显示文本
	painter.drawText(0, 0, width, height,//制定位置
		Qt::AlignHCenter | Qt::AlignVCenter,//设置对齐方式
		GBK::ToUnicode("绘制文字，显示文本")); 
}

//换行显示
void MyWidget::wrap()
{
	QPainter painter(this);

	int width = this->width();
	int height = this->height();

	//设置颜色
	painter.setPen(QColor(0x00, 0x00, 0x00));

	//设置字体
	QFont font("Times", 14, QFont::Bold, true);
	painter.setFont(font);

	QString mystr = GBK::ToUnicode("绘制文字，显示文本,这是一段很长的话，因为在一行会有可能无法显示。需要进行换行显示，以保证显示完整的信息！");
	
	QRect rect(0, 0, width, height);

	//设置option
	QTextOption option;
	option.setWrapMode(QTextOption::WrapAnywhere); //可以在任意位置换行显示
	painter.drawText(rect, mystr, option);

}

//动态测试宽度
void MyWidget::dynamic()
{
	QPainter painter(this);
	int width = this->width();
	int height = this->height();

	QFont font("Times", 14, QFont::Normal, false);
	painter.setFont(font);

	//动态显示
	QString myStr = GBK::ToUnicode("绘制文字，显示文本,这是一段很长的话，因为在一行会有可能无法显示。需要进行换行显示，以保证显示完整的信息！");
	QFontMetrics metric(font);
	QRect boundingRect = metric.boundingRect(0, 0, width, height,
		Qt::AlignHCenter | Qt::AlignVCenter, 
		myStr);

	qDebug("width: %d, height: %d,(%d,%d)\n",
		boundingRect.width(), boundingRect.height(),
		width, height);

	//首先判断当前页面宽度是否可以显示所有的文本，如果可以则正常显示
	if (boundingRect.width() <= width)
	{
		painter.drawText(0, 0, width, height,
			Qt::AlignHCenter | Qt::AlignVCenter,
			myStr);
	}
	else //如果当前页面无法显示所有文本，则需要逐步缩短文本，检测可以显示范围
	{
		//逐步缩短尝试
		for (int i=myStr.length()-1;i>=0;i--)
		{
			QString subStr = myStr.left(i); //逐步或者字符串左边子串长度
			QString showText = subStr + "..."; //因为在无法全部显示时，我们想要在显示文本后面加上 “...”，所以子串的长度是 子串+“...”

			QRect bounding = metric.boundingRect(0, 0, width, height,
				Qt::AlignHCenter | Qt::AlignCenter, showText);

			if (bounding.width()<width) //判断子串长度是否可以显示，如果可以则显示，如果子串长度依然大，则进一步缩短，直至页面可以显示子串长度
			{
				painter.drawText(0, 0, width, height,
					Qt::AlignHCenter | Qt::AlignVCenter, 
					showText);
				break;
			}
		}
	}
}

void MyWidget::paintEvent(QPaintEvent *event)
{
	//simple(); //简单测试
	//wrap(); //换行显示
	dynamic(); //动态测试宽度
}