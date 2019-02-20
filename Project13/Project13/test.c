#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//void rotate(char *str, int sz, int cot)
//{
//	int i = 0;
//	for (int j = cot -1; j >= 0; j--)
//	{
//		for (i = 0; i < sz-cot; i++)
//		{
//			char tmp = *(str+j+i);
//			*(str+i+j) = *(str+j+ i+1);
//			*(str + j +i+1) = tmp;
//	}
//	
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", *(str + i));
//	}
//}
//
//int main()
//{
//	int cot = 0;
//	char arr[] = { 'A', 'B', 'C', 'D' };
//	//char *c = arr;
//	//printf("%c", *(c + 1));
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("请输入你想左旋的位数");
//	scanf("%d", &cot);
//	rotate(arr, sz, cot);
//	system("pause");
//	return 0;
//}


int check(char *str, char *str1, int num,int sz)
{
	int i = 0;
	while (i<num)
	{
		if (*(str + i) != *(str1 + sz - num + i))
		{
			return 0;
		}
		else  if (*(str + num) != *str1)
		{
			return 0;
		}

			i++;
	}
	return 1;
}

int main()
{
	char arr[6] = {0};
	char arr1[6] = { 0 };
	int num = 0;
	int ret = 0;
	printf("请输入两个字符串，左旋几位");
	scanf("%s%s%d", arr,arr1,&num);
	
	
	ret = check(arr, arr1, num,5);
	//printf("%s", arr);
	if (ret == 1)
	{
		printf("1\n");
	}
	else
		printf("0\n");
	system("pause");
	return 0;

}