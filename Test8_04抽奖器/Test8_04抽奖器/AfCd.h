#pragma once
#include <string.h>
#include <string>
using namespace std;
using std::string;

class AfCd
{
public:
	// �õ�exe�ļ����ڵ�Ŀ¼ 
	static string exeLocation(char seperator = '\\');

	// �л���Ŀ��λ�� 
	static void cd(const string& targetDir);

	// �л���exe���е�λ�� 
	static void cd();
};