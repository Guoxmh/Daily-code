#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	for (i =1; i < 7; i++)
	{
			int j = 0;

			for (j = 0; j < 7-i; j++)
			{
				printf(" ");
			}

			for (j = 2; j < 2*i+1; j++)
			{
				printf("*");
			}
			printf("\n");
	
	}
	for (i = 0; i <7; i++)
	{
		int j = 0;

		for (j = 0; j < i; j++)
		{
			printf(" ");
		}

		for (j = 0; j < 13 - 2*i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 999; i++)
//	{
//		int m = 0;
//		int n = 0;
//		int k = 0;
//
//		 m = i / 100;
//		 n = i % 100 / 10;
//		 k = i % 10;
//
//		 if ((m*m*m + n*n*n + k*k*k )== i)
//		 {
//			 printf("%d\n", i);
//			 count++;
//		 }
//	 
//	}
//	printf("总共有%d个\n",count);
//	system("pause");
//	return 0;
//
//}

//
//int main()
//{
//	
//	int a = 0;
//	int b = 0;
//	    printf("请输入一个数a:");
//		scanf("%d", &a);
//		b =(a * 10000) + (2 * a * 1000) + (3 * a * 100) + (4 * a * 10) + (5* a);
//        printf("            Sn==%d\n", b);
//		system("pause");
//	return 0;
//}