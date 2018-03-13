﻿#include <string>
using std::string;

//Change Directory 获取目录
class CurrentDir
{
public:
	// 得到exe文件所在的目录 
	static string exeLocation(char seperator = '\\');

	// 切换到目标位置 
	static void cd(const string& targetDir);

	// 切换到exe所有的位置
	static void cd();
};