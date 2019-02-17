#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


//int main()
//{
//	int a, b, c, d, e;
//	a = b = c = d = e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b == 2 && a != 3) || (b != 2 && a == 3))
//						{
//							if ((b == 2 && e != 4) || (b != 2 && e == 4))
//							{
//								if ((c == 1 && d != 2) || (c != 1 && d == 2))
//								{
//									if ((c == 5 && d != 3) || (c != 5 && d == 3))
//									{
//										if ((e == 4 && a != 1) || (e != 4 && a == 1))
//										{
//											if (a*b*c*d*e == 120)
//											{
//												printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//											}
//										
//										}
//									}
//								}
//							}
//						}
//
//					}
//				}
//			}
//		}
//	}
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a, b, c, d;
//	a = b = c = d = 0;
//	for (a = 0; a < 2; a++)
//	{
//		for (b = 0; b < 2; b++)
//		{
//			for (c = 0; c < 2; c++)
//			{
//				for (d = 0; d < 2; d++)
//				{
//					if (((a == 1 && c == 1 && d == 1 && d == 0)+ (c == 0 && a == 0 && d == 1 && d == 0)
//						+ (d == 0 && a == 0 && c == 1&& d == 0) 
//						+ (d == 1 && a == 0 && c == 1 && d==1)) == 1  )
//					{
//						if (a + b + c + d == 1)
//						{
//							if(a == 1)
//							{
//								printf("a是凶手\n");
//							}
//							if (b == 1)
//							{
//								printf("b是凶手\n");
//							}
//							if (c == 1)
//							{
//								printf("c是凶手\n");
//							}
//							if (d == 1)
//							{
//								printf("d是凶手\n");
//							}
//
//						}
//						
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//

int main()
{
	char killer = 0;
	for (killer = 'a'; killer < 'd'; killer++)
	{
		if((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("%c\n", killer);
		}
	}

	system("pause");
	return 0;
}

//}
//#define row   9
//#define col   9
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[row][col] = { 0 };
//	arr[0][0] = 1;
//	arr[1][0] = 1;
//	arr[1][1] = 1;
//	for (i = 2; i < row; i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//		for (j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		
//		}
//	}
//
//
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			arr[i][j];
//			printf("%-3d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int row = 0;
//	printf("请输输入想打印的行数:>");
//	scanf("%d", &row);
//
//	int a[400][400] = { 0 };
//	for (i = 0; i < row; i++)
//	{
//		a[i][0] = 1;
//	}
//	for (i = 0; i < row; i++)
//	{
//		for (j = 1; j <=i; j++)
//		{
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//		}
//	}
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%-5d", a[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}