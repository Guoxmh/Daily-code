#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


//int mult(int n)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 0; i < n; i++)
//	{
//		sum *= 2;
//	}
//	return sum;
//}
//
//unsigned int reverse_bit(unsigned int value)
//{
//	int cot = 0;
//	int  i = 0;
//	for (i = 31; i >= 0; i--)
//	{
//		if (value % 2 == 1)
//		{
//			cot += mult(i);
//		}
//		value >>= 1;
//	}
//	return cot;
//}
//
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	printf("请输入一个值:>");
//	scanf("%d", &num);
//
//	ret = reverse_bit( num);
//	printf("%u\n", ret);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	printf("请输入a  b:>");
//	scanf("%d%d", &a, &b);
//	if (a >= b)
//	{
//	   ret = (a - b) / 2 + b;
//	}
//	else
//	{
//		ret = (b - a) / 2 + a;
//	}
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//
//	int arr[] = { 1, 1, 2, 2, 3, 4, 3, 4, 5, 6, 6 };
//	int ret = arr[0];
//	int  num = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < num ; i++)
//	{
//		ret ^= arr[i];
//	}
//
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。
//	只能开辟有限个空间（空间个数和字符串的长度无关）。
//

void reverse(char *start, char *end)
{
	assert(start!= NULL);
	assert(end != NULL);
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		*start++;
		*end--;
	}

}
void reverse_str(char *arr, int sz)
{     
	assert(arr != NULL);
	char *left = arr;
	char *right = arr + sz - 1;
	 reverse(left, right);
	 while (*arr)
	 { 
		 left = arr;
		
		while(*arr != ' '&& *arr != '\0')
		 {
			arr++;
		 }
		right = arr - 1;

		reverse(left, right);

		if (*arr == ' ')
		{
			arr++;
		}
		
 
		


	 }
}


int main()
{
	int len = 0;
	char arr[] = "student a am i";
	len = strlen(arr);
	reverse_str(arr, len);
	printf("%s", arr);
	printf("\n");
	system("pause");
	return 0;
}



