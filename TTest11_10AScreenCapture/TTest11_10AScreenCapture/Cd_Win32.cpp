#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <windows.h>
#include "MyCd.h"

string MyCd::exeLocation(char seperator)
{
	// 得到exe文件的全路径
	char buf[512] = { 0 };
	GetModuleFileNameA(NULL, buf, 512);

	// 替换分隔符
	string filePath = buf;
	if (seperator != '\\') //windows下默认是反斜线
	{
		for (int i = 0; i < filePath.length(); i++)
		{
			if (filePath[i] == '\\')
				filePath[i] = seperator;
		}
	}

	// 去除文件名，得到纯目录 
	int pos = filePath.rfind(seperator);
	string cd = filePath.substr(0, pos + 1);
	return cd;
}

void MyCd::cd(const string& dir)
{
	SetCurrentDirectoryA(dir.c_str());
}

void MyCd::cd()
{
	string where = exeLocation('\\');
	cd(where);
}

