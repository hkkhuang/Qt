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

//��ͼ
int TTest11_10AScreenCapture::onCapture()
{
	// ���������
	this->hide();

	// ���ر�������Ҫһ��ʱ�䣬����ʱһ��ʱ���ſ�ʼ��ͼ
	QTimer::singleShot(300, this, SLOT(onDelayedCapture()));

	return 0;
}

//�ӳٿ�ʼ��ͼ
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

//����
int TTest11_10AScreenCapture::onSave()
{
	QPixmap picture = ui.frame->pixmap();
	if (picture.isNull()) return 0;

	// ���浽Ŀ���ļ�
	QString filename = QFileDialog::getSaveFileName(this,
		"Save Picture", "", "Image File(*.jpg)");
	if (filename.length() > 0)
	{
		picture.save(filename);
	}
	return 0;
}
