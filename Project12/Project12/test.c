#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//

//void sort(int *str)
//{
//	int *str1 = str;
//	int count = 0;
//	while (*str1 % 2 == 0)
//	{
//		if (*str1 % 2 == 1)
//		{
//			count++;
//		}
//		str1++;
//	}
//	int tmp = *str1;
//	*str1 = *(str + count);
//	*(str + count) = tmp;
//
//}
//
//
//
//void my_sort(int *str, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz/2+1; i++)
//	{
//		if (*str % 2 == 0)
//		{
//			sort(str, i);
//		}
//		str++;
//	}
//	
//}
//
//int main()
//{
//	//指针
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 , 4, 5, 6, 7};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//
//	system("pause");
//	return 0;
//}

void search(int (*str)[3], int tmp,int row,int col)
{
	if (*(*str+0) == tmp)
	{
		printf("找到\n");
		return 0;
	}
	for (int i = 1; i < row; i++)
	{
		if (tmp < *(*(str + i) + i))
		{
			for (int j = 0; j < row - i; j++)
			{
				if (tmp == *(*(str + i-1) + (i+j-1)))
				{
				printf("找到\n");
				break;
				}
				else if (*(*(str+i-1+j)+(i-1)) == tmp)
				{
				printf("找到\n");
				break;

				}
				else
				printf("找bu到\n");
				break;
			}
			}
		}

	}

	int main()
	{
	int arr[][3] = { 1, 2, 3, 2, 3, 4, 3, 4, 5 };
	int num = 0;
	printf("请输入要查找的数字:>");
	scanf("%d", &num);
	search(arr, num, 4, 3);
	system("pause");
	return 0;
}