#ifndef _DLL_H_
#define _DLL_H_

#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif

DLLIMPORT void HelloWorld(void);
/*函式宣告，此為專案檔內建之函式
第一個void代表此函數沒有回傳值
第二個void則是無「引數」輸入*/
DLLIMPORT int Add(char *stu_id, int, int);
DLLIMPORT int Fibonacci(int);

#endif
