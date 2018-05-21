#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <windows.h>
#include "MyCd.h"

string MyCd::exeLocation(char seperator)
{
	// �õ�exe�ļ���ȫ·��
	char buf[512] = { 0 };
	GetModuleFileNameA(NULL, buf, 512);

	// �滻�ָ���
	string filePath = buf;
	if (seperator != '\\') //windows��Ĭ���Ƿ�б��
	{
		for (int i = 0; i < filePath.length(); i++)
		{
			if (filePath[i] == '\\')
				filePath[i] = seperator;
		}
	}

	// ȥ���ļ������õ���Ŀ¼ 
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
