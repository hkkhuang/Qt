#pragma once
#include <string>
using std::string;

class MyCd
{
public:
	// �õ�exe�ļ����ڵ�Ŀ¼ 
	static string exeLocation(char seperator = '\\');

	// �л���Ŀ��λ�� 
	static void cd(const string& targetDir);

	// �л���exe���е�λ�� 
	static void cd();
};