#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
	int i1, i2;
	char str1[11]; //student id length is 10, add ending char at the end
	printf("Please enter your student id and 2 numbers you want to add\n");
	printf("For instance, B123456789 25 10\n\nKeyIn: ");

	scanf("%s %d %d, &str1, &i1, &i2"); //�N�r��P��Ӿ��Ū�i��
	printf("\n");

	HMODULE hInst;	//Ū��DLL��Ҧs��handle�ܼ�
	char* (*CallDll) (char*, int, int);	//�ŧi�@�Ө禡�A�^�ǭȬO�r�ꪺ����(�T�w�Ϊk)
	hInst = LoadLibrary("dll-practice.dll");	//�NDLLtest.dll���JhInst�̭�
	(FARPROC*)(CallDll) = GetProcAddress(hInst, "Add");	//�Q��GetProcAddress����DLL�̪�Add��Ƥ���}���V��CallDll�禡
	printf("Result: %s\n", CallDll(str1, i1, i2));	//��X�I�sCallDll�禡�����G
	FreeLibrary(hInst);	//�N���J��DLL����

	system("PAUSE");
	return 0;
}

