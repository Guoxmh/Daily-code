#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


	int main()
	{

		int scr = 0;
		int n = 0;
		printf("�����ж���ѧ��:>");
			scanf("%d", &n);
		while (n)
		{
			printf("�������:>");
			scanf("%d", &scr);
			if (scr < 0 || scr>100)
			{
				printf("�������   \n");
				continue;
			}
			if (scr> 50)
			{
				printf("%d�֣��㼰����\n", scr);
			}
			else
			{
				printf("%d�֣�û����\n", scr);
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
	//	printf("�ܹ���%d��\n",count);*/
		system("pause");
		return 0;
	
	}
