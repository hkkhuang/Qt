
#include <stdio.h>
#include <stdlib.h>


#include <winsock2.h>

// 包含windows的头文件，用于测试Sleep
#include <windows.h>


int HandleCommand()
{
	printf("begin .............");
	::Sleep(10 * 1000); // 单位：毫秒
	printf(".............end \n");
	return 0;
}

int main()
{
	// 主控循环
	while (1)
	{
		printf(">>> ");
		char cmdline[128]; // 命名行
		gets_s(cmdline);


		// 处理命令
		printf("处理中 .... \n");
		if (strcmp(cmdline, "1") == 0)
		{
			HandleCommand();
		}
		printf("处理完成\n\n");
	}
}


