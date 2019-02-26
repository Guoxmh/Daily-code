#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
	
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0)
				break;
		}
		if (j>=sqrt(i))
		{
			printf("%d是素数\n", i);
			count++;
		}
	}	
	printf("%d", count);
	system("pause");
	return 0;

}
//
//int main()
//{
//	int i, j;
//	int count = 0;
//	double num;
//	for (i = 100; i <= 200; i++)
//	{
//		num = sqrt(i);
//		for (j = 2; j <= num; j++)
//		{
//			if (i%j == 0)
//				break;
//
//		}
//		if (j >= num)
//		{
//			printf("%d是素数\n", i);
//			count++;
//		}
//
//	}
//	printf("共%d", count);
//	system("pause");
//	return 0;
//}