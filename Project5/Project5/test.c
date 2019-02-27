#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


	int main()
	{

		int scr = 0;
		int n = 0;
		printf("输入有多少学生:>");
			scanf("%d", &n);
		while (n)
		{
			printf("输入分数:>");
			scanf("%d", &scr);
			if (scr < 0 || scr>100)
			{
				printf("输入错误   \n");
				continue;
			}
			if (scr> 50)
			{
				printf("%d分，你及格了\n", scr);
			}
			else
			{
				printf("%d分，没及格\n", scr);
			}
			n--;
		}
		
	//	/*int i = 0;
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
	//	printf("总共有%d个\n",count);*/
		system("pause");
		return 0;
	
	}
