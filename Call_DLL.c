#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
	int i1, i2;
	char str1[11]; //student id length is 10, add ending char at the end
	printf("Please enter your student id and 2 numbers you want to add\n");
	printf("For instance, B123456789 25 10\n\nKeyIn: ");

	scanf("%s %d %d, &str1, &i1, &i2"); //將字串與兩個整數讀進來
	printf("\n");

	HMODULE hInst;	//讀取DLL後所存放的handle變數
	char* (*CallDll) (char*, int, int);	//宣告一個函式，回傳值是字串的指標(固定用法)
	hInst = LoadLibrary("dll-practice.dll");	//將DLLtest.dll載入hInst裡面
	(FARPROC*)(CallDll) = GetProcAddress(hInst, "Add");	//利用GetProcAddress執行DLL裡的Add函數之位址指向給CallDll函式
	printf("Result: %s\n", CallDll(str1, i1, i2));	//輸出呼叫CallDll函式的結果
	FreeLibrary(hInst);	//將載入的DLL釋放

	system("PAUSE");
	return 0;
}

