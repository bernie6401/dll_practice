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


/*DLL_PROCESS_ATTACH(DLL���M�g��i�{���a�}�Ŷ�)
�򥻤W�O�@��initialization
��l�ƪ��ʧ@���|��^�@�ӥ��L��
�YProcess_attach�S����l�Ʀ��\�|��^false
���ɨt�δN�|�۰ʶ]Process_detach�h�M�z���ǨS�����\��l�ƪ��F��
*/

/*DLL_THREAD_ATTACH�MDLL_PROCESS_ATTACH�ܹ�
�]�O�@��initialization
���L�Ĥ@���|����DLL_PROCESS_ATTACH
�ĤG������~�|����DLL_THREAD_ATTACH
*/

/*DLL_THREAD_DETACH�o�̬O�p�G�ե�ExitThread�ӵ����u�{���ɭ�
�|�q���Ҧ���DLL�h����u�{�Ū��M�z�u�@
*/

/*DLL_PROCESS_DETACH�����ʺA�s����Ʈw
�q�`��Ƴ��O�ϥ�FreeLibrary(����禡�w)
�t�X��LoadLibrary�ϥΦ]�����[���~������
*/
