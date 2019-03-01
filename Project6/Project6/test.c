#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	for (int i = 0; i < 5; i++)
	{
		a = a++;
	}
	printf("%d", a);
	system("pause");
	return 0;
}