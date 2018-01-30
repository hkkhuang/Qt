// Test6_1_CharacterConversion.cpp : 定义控制台应用程序的入口点。

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <winsock2.h>
#include <windows.h>

//GBK-->UTF-16
int test()
{
	//0xc6,0xbf ,0xbb ,0xc9 ,0xbf ,0xc9 ,0x00 
	char text_gbk[] = "黄可可"; //字符串字面常量
	wchar_t text_utf16[256] = { 0 };

	int n = MultiByteToWideChar(CP_ACP, 0,
		text_gbk, strlen(text_gbk),
		text_utf16, 256);

	printf("结果:%d 个宽字符 \n", n);
	return 0;
}

//GBK-->UTF-16-->UTF-8
int test2()
{
	char text_gbk[] = "黄可可"; //字符串字面常量
	wchar_t text_utf16[256] = { 0 };

	int n1 = MultiByteToWideChar(CP_ACP, 0,
		text_gbk, strlen(text_gbk),
		text_utf16, 256);

	char text_utf8[256];

	int n2 = WideCharToMultiByte(CP_UTF8, 0, text_utf16, n1, text_utf8,256,NULL,0);
	printf("结果:%d 个宽字符 \n", n2);
	return 0;
}

int main()
{
	//test();
	test2();
	return 0;
}

