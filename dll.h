#ifndef _DLL_H_
#define _DLL_H_

#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif

DLLIMPORT void HelloWorld(void);
/*�禡�ŧi�A�����M���ɤ��ؤ��禡
�Ĥ@��void�N����ƨS���^�ǭ�
�ĤG��void�h�O�L�u�޼ơv��J*/
DLLIMPORT int Add(char *stu_id, int, int);
DLLIMPORT int Fibonacci(int);

#endif
