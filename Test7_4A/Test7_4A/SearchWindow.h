#pragma once

#include <QWidget>
#include "ui_SearchWindow.h"

class SearchWindow : public QWidget
{
	Q_OBJECT

public:
	SearchWindow(QWidget *parent = Q_NULLPTR);
	~SearchWindow();

public: //修改为public   (做搜索小窗口响应)
	Ui::SearchWindow ui;
};
