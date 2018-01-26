# Qt基础

## 1-第一个窗口程序

配置好环境,两种方式创建窗口程序,一是手动创建,二是Qt Designer.

* **注意点:**

1. 在Qt5中与Qt4不同之处是`QtGui`改为`QtWidgets`.

2. 在编写好程序编译后,在Debug中打开 `XXX.exe`文件报错`系统错误-无法启动此程序,因为计算机中丢失QtCored5.dll  .....`,原因是`DLL动态库原因`,解决方案是在系统`Path环境变量`中添加`C:\Qt\Qt5.8.0\5.8\msvc2015\bin`.


## 2-初步认识窗体

### 2-1 认识各种窗体
#### 窗体 Widget
不仅仅是带边框的窗口叫widget,其他所有有界面的组件,如工具栏,按钮,文本框,下拉列表等都是Widget.

他们都有一个共同的父类:`QWidget`

#### 窗口设计的任务
1. 把各个控件组合起来,放在一个大的窗体(Layout,布局)
2. 添加时间处理,使得窗体可以运作(Signal & Slot)

### 2-2 窗口坐标

#### 顶级窗口和子窗口

顶级窗口(Top-level widget):一个标准的窗口,带边框,标题栏,若干按钮.(独立)

子窗口:在窗口里面的窗口,如按钮,文本框,下拉列表等控件,都是子窗口.(不独立,随着父窗口移动)

1. 每一个子窗口都有父窗口
2. 子窗口里面可能层包含了若干子窗口,是一层一层的关系
3. 顶级窗口也有父窗口,就是桌面(Desktop Widget),桌面本身就是一个窗口

#### 窗口的屏幕坐标
描述一个窗口在屏幕上的位置:

1. 位置:左上角坐标x,y
2. 大小:宽度:width,高度height (单位:像素)

如:屏幕分辨率1024*768,屏幕左上角(top-left corner)为(0,0),右下角(bottom-right corner)为(1023,767).


	#include <QtWidgets>
	#include <QtWidgets/QApplication>

	int main(int argc, char *argv[])
	{
		QApplication a(argc, argv);
		//Test2_1A w;
		//w.show();
		QWidget* w=new QWidget();
		w->setGeometry(100, 100, 400, 400); //设置窗体大小 通过setGeometry()设置的窗体坐标不包含窗体外边框，标题栏等大小，只是内部显示大小
		w->setWindowTitle("Hello World!\n"); //设置窗体标题
		w->move(0, 0); //移动窗体到指定坐标位置 是将窗体的外边框坐标位置
		w->show();
		return a.exec();
	}

#### 子窗口的相对位置
一个子窗口在父窗口的相对位置

1. 子窗口的左上角,相对于父窗口的坐标
2. 子窗口的大小

## 3 窗口的布局

在Qt中使用布局器QLayout进行布局.

两个常用的QLayout子类:

* QHBoxLayout:横向布局
* QVBoxLayout:纵向布局

**继承关系:**

	QLayout--QBoxlayout--QHBoxLayout & QVBoxLayout
	
### 3-1 纵向布局

V:Vertical 竖直方向的
Box:箱子

纵向布局:把若干箱子竖直的堆叠在一起,只关心每个Box高度,忽略宽度信息.

每一个子窗体都是一个Box,布局时只关注每个Box的高度,水平方向没有人争.

**示例:使用布局器手动创建两个控件**

1. 新建项目 `Qt Gui Application`,自定义名称,其他默认选择.

2. 添加`Qt Classes`类: `MyWin`,添加`MyWin.h` 和 `MyWin.cpp`
   ![](img/Qt001.png)
   ![](img/Qt002.png)

3. 在`MyWin.h`中:

		#include <QWidget>
		#include <QPushButton>
		#include <QVBoxLayout>
		#include <QLineEdit>
		#include <QPlainTextEdit>
		
		class MyWin : public QWidget
		{
			Q_OBJECT  //要求必须包含的宏 Q_OBJECT
		
		public:
			MyWin(QWidget *parent); //构造函数
			~MyWin();  //析构函数
		
		private:
			//声明成员变量
			//QPushButton* m_button; //创建成员变量 表示按钮对象
			QLineEdit* m_lineEdit;
			QPlainTextEdit* m_textEdit;
		}; 
4. 在`MyWin.cpp`中:
		
		#include "MyWin.h"
		
		//构造函数
		MyWin::MyWin(QWidget *parent)
			: QWidget(parent)
		{
			//m_button = new QPushButton(this); //QPushButton也是窗口，每一个窗口创建时都要指定其父窗口 this表示父窗体就是其自身
			//m_button->setText("hello qt");//设置显示文本
			//m_button->setGeometry(100, 100, 200, 50);
		
			//创建控件对象
			m_lineEdit = new QLineEdit(this);
			m_textEdit = new QPlainTextEdit(this);
		
			//创建布局器
			QVBoxLayout* layout = new QVBoxLayout(this);
			layout->addWidget(m_lineEdit); //将第一个box添加到布局器
			layout->addWidget(m_textEdit); //将第二个box添加到布局器
		
			//使用布局器
			this->setLayout(layout);
		
		
		}
		
		//析构函数
		MyWin::~MyWin()
	    {
	    }
 
5. 在`main.cpp`中:
		
		#include "Test2_3A.h"
		#include "MyWin.h"
		#include <QtWidgets/QApplication>
		
		int main(int argc, char *argv[])
		{
			QApplication a(argc, argv);
			//Test2_3A w;
			//w.show();
			MyWin w(NULL); //顶级窗口 在创建时传入NULL 
			w.resize(400, 300); //设置大小
			w.move(100, 100);  //设置位置
			w.show(); // 显示窗口
			return a.exec();
		}
		
6. 如图:

	![](img/Qt003.png)
	
	
### 3-2 窗口调整的策略
Size Policy:用于描述一个Widget被resizing(调整大小)的时候采用的策略.

#### 在QSizePolicy中定义了七种策略:

	1. Fixed:使用sizeHint 不能更大,不能更小
	2. Minimum:不得小于sizeHint,可以更大,但不需要更大
	3. maximum:不得大于sizeHint,可以更小
	4. Preferred:优先使用sizeHint,可大可小
	5. Expanding:使用sizeHint,越大越好(最常用)
	6. MinimumExpanding:不得小于sizeHint,越大越好
	7. lgnored:忽略sizeHint,越大越好

### Size Policy

#### 相关函数:

//获取当前policy

QsizePolicy Qwidget::sizePolicy() const

//设置新的policy

void setSizePolicy(QSizePolicy)

void setSizePolicy(QSizePolicy::Policy horizontal,QSizePolicy::Policy vertical)

#### Size Hint
QWidget类有一个函数

virtual QSize sizeHint() const;

每一种Widget窗口类都要重写这个函数

作用:向布局器声明自己需要的空间大小,推荐尺寸

**注意:**sizeHint和sizePolicy,都是提供给布局器的信息,布局器QLayou会根据这两个信息来决定这个窗口空间的实际尺寸.


> 在3-1中定义窗口,在使用鼠标拖动时候,上面文本框保持不变,下面可以放大或者缩小.
> 
> 因为:上面为 Fixed    下面为:Expend


将示例的控件1lineEdit拖动时变化策略更改:

	//设置lineEdit的Policy
	m_lineEdit->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding); 
	//横向还是Expanding,将纵向也改为Expanding


### 3-3 可视化布局

#### 手工布局:

手动使用代码生成布局样式.

一个复杂的洁面，就是由多个最简单的BoxLayout组成

#### 可视化布局:

#### 使用设计器,可视化界面布局.

1. 按照之前方式创建好项目
2. 添加Qt Class,选择`"Qt GUI Class"`
3. 添加完成后,选择`"MyWin.ui"`
4. 进入Qt Designer,进行可视化设计.

#### 如何添加删除对象
1. **添加控件**

	从左侧控件列表,选择需要的空间拖动到右侧设计窗口
	
2. **删除控件**

	在编辑窗口中选择需要删除的控件,按住Delete删除,或者在右侧`"Object Inspector"`中,找到这个控件按住Delete删除.
	
#### 如何组合和打散对象
组合: 选择多个对象,点击上面的Layout

打散: 选择一个组合,点击打散按钮

**注意:** 最后要对整个Widget设置一下Layout

(方法:点一个空白位置,取消任何选中的对象,再选择Layout;或者从右侧Object Inspector中选择)


### 3-4 更多布局参数

#### 布局参数

1. size hint:推荐大小

2. size Policy: 策略

	最终的大小是size hint和size policy 结合确定.

3. stretch factor: 拉伸因子

4. maximum size/minimum size: 上限与下限


stretch factor:在同一个方向上,两个控件都有拉伸的需求(Expanding),布局器需要合理的分配这个需求.

如A,B两个控件都是Expanding,stretch是1,1     那么在拉伸的时候分配比例就是1:1

> 注:可以在`"Qt Designer"`中选择控件,直接操作`"Property Editor"`中的属性值,`"sizePolicy-Horizontal Stretch"`,`"sizePolicy-Vertical Stretch"`,`"minimumSize"`,`"maximunSize"`.











