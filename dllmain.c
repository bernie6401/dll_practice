//Reference about MsgBox and function meaning by //practice progress reference by https://ithelp.ithome.com.tw/articles/10238425
//Reference about Stdio practice by https://pws.niu.edu.tw/~ttlee/sp.100.2/dll/
//Reference about Fabonacci practice by https://home.gamer.com.tw/artwork.php?sn=5026451

/* Replace "dll.h" with the name of your header */
#include "dll.h"
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

DLLIMPORT void HelloWorld(void)
{
	MessageBox(0,"Hello World from DLL!\n","Hi",MB_ICONINFORMATION);
}

DLLIMPORT int Add(char *stu_id, int a, int b)
{
    printf("Enter student id: %s\n", stu_id);
    printf("%d + %d = %d\n", a, b, a + b);
	return a+b;
}

DLLIMPORT int Fibonacci(int n)
{
	if (n <= 2)
	{
		return 1;
	}

	return Fibonacci(n - 1) + Fibonacci(n - 2);
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL,DWORD fdwReason,LPVOID lpvReserved)
{
	switch(fdwReason)
	{
		case DLL_PROCESS_ATTACH:
		{
			break;
		}
		case DLL_PROCESS_DETACH:
		{
			break;
		}
		case DLL_THREAD_ATTACH:
		{
			break;
		}
		case DLL_THREAD_DETACH:
		{
			break;
		}
	}
	
	/* Return TRUE on success, FALSE on failure */
	return TRUE;
}


/*DLL_PROCESS_ATTACH(DLL文件映射到進程的地址空間)
基本上是一種initialization
初始化的動作都會返回一個布林值
若Process_attach沒有初始化成功會返回false
此時系統就會自動跑Process_detach去清理那些沒有成功初始化的東西
*/

/*DLL_THREAD_ATTACH和DLL_PROCESS_ATTACH很像
也是一種initialization
不過第一次會執行DLL_PROCESS_ATTACH
第二次之後才會執行DLL_THREAD_ATTACH
*/

/*DLL_THREAD_DETACH這裡是如果調用ExitThread來結束線程的時候
會通知所有的DLL去執行線程級的清理工作
*/

/*DLL_PROCESS_DETACH卸載動態連結資料庫
通常函數都是使用FreeLibrary(釋放函式庫)
配合著LoadLibrary使用因為有加載才有釋放
*/
