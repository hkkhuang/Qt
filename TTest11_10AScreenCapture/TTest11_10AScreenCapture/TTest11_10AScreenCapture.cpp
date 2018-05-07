#include "TTest11_10AScreenCapture.h"
#include "MyRegionSelector.h"
#include <QTimer>
#include <QGuiApplication>
#include <QDesktopWidget>
#include <QScreen>
#include <QFileDialog>

TTest11_10AScreenCapture::TTest11_10AScreenCapture(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.actionCapture, SIGNAL(triggered()), this, SLOT(onCapture()));
	connect(ui.actionSave, SIGNAL(triggered()), this, SLOT(onSave()));
}

//截图
int TTest11_10AScreenCapture::onCapture()
{
	// 令本窗口隐藏
	this->hide();

	// 隐藏本窗口需要一定时间，故延时一段时间后才开始截图
	QTimer::singleShot(300, this, SLOT(onDelayedCapture()));

	return 0;
}

//延迟开始截图
int TTest11_10AScreenCapture::onDelayedCapture()
{
	QScreen *screen = QGuiApplication::primaryScreen();
	//QScreen *screen = QGuiApplication::primaryScreen();
	//Qt4.x
	//QPixmap screen = QPixmap::grabWindow(QApplication::desktop()->winId());
	//Qt5.x
	QPixmap myscreen = screen->grabWindow(QApplication::desktop()->winId());

	//MyRegionSelector   QDialog
	MyRegionSelector dlg(myscreen, this);
	if (QDialog::Accepted == dlg.exec())
	{
		QPixmap region = myscreen.copy(dlg.selectRegion);
		ui.frame->display(region);
	}

	this->showNormal();
	return 0;
}

//保存
int TTest11_10AScreenCapture::onSave()
{
	QPixmap picture = ui.frame->pixmap();
	if (picture.isNull()) return 0;

	// 保存到目标文件
	QString filename = QFileDialog::getSaveFileName(this,
		"Save Picture", "", "Image File(*.jpg)");
	if (filename.length() > 0)
	{
		picture.save(filename);
	}
	return 0;
}
