#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
#include<string.h>
//char *my_strcpy(char *str, const char *str1)
//{
//	assert(str);
//	assert(str1);
//	while (*(str++) = *(str1++))
//	{
//		;
//	}
//}
//
//int main()
//{
//	char a[6] = "abcde";
//	char b[6] = { 0 };
//	my_strcpy(b, a);
//	printf("%s\n", b);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char arr[20] = "Hellow ";
//	char arr1[10] = "World";
//	strcat(arr, arr1);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}


//char *my_strcat(char *str, const char *str1)
//{
//	assert(str);
//	assert(str1);
//	while (*str)
//	{
//		str++;
//	}
//	while (*(str++) = *(str1++))
//			{
//				;
//			}
//
//}
//
//int main()
//{
//	char arr[20] = "Hellow ";
//	char arr1[10] = "World";
//	my_strcat(arr, arr1);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char arr[20] = "abcdef";
//	char arr1[20] = "def";
//	
//	if (strstr(arr, arr1))
//	{
//		printf("%s", arr1);
//	}
//	system("pause");
//	return 0;
//}

//char*  my_strstr(const char *dest, const char *src)
//{
//	assert(dest);
//	assert(src);
//	char *start = dest;
//	char *start1 = src;
//
//	while (1)
//	{
//		dest = start + 1;
//		src = start1;
//
//		while (*dest)
//		{
//			if (*dest == *src)
//			{
//				start = dest;
//				break;
//			}
//			dest++;
//		}
//		while (*src)
//		{
//			if (*src != *dest)
//				break;
//			
//			src++;
//			dest++;
//		}
//		if (*src == '\0')
//			return dest;
//		
//	}
//
//}
//
//
//int main()
//{
//	char arr[20] = "abbbca";
//	char arr1[20] = "bbc";
//
//	if (my_strstr(arr, arr1) > 0)
//	{
//		printf("%s\n", arr1);
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{    //�����Ҫע����ǣ�Ϊʲô�����ġ�c�������� int ���ͣ������ǡ�char�������أ�
//    //��ʵԭ��ܼ򵥣������õ����ַ��� ASCII �루��Ϊÿ���ַ�����Ӧ��һ�� ASCII �룩
//	//	�������ڴ�ֵ��ʱ��ȿ��Դ���char�����͵�ֵ���ֿ��Դ���int�����͵�ֵ��0~127����
//	char arr[10] = "abcdrf";
//	char *ret = strchr(arr, 'r');
//	printf("%c\n", *ret);
//
//	system("pause");
//	return 0;
//}

//char *my_strchr(char *str, int ch )
//{
//	////������*str��c��Ϊ0�����
//	assert(str);
//	while (*str && *str != (char)ch)
//	{
//		str++;
//
//	}
//	if (*str == (char)ch)
//		return (char*)str;
//	return NULL;
//}
//
//int main()
//{
//
//	char arr[10] = "abcde";
//	char *ret = my_strchr(arr, 'c');
//	printf("%c\n", *ret );
//	printf("%d\n", (ret - arr)+1);
//	system("pause");
//	return 0;
//}


//int main()
//{
//
//	char arr[10] = "abd";
//	char arr1[10] = "abk";
//	int ret = strcmp(arr, arr1);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//���ڷ���1
//���ڷ���0
//С�ڷ���-1

int my_strcmp(char *str, char *str1)
{
	assert(str);
	assert(str1);
	while (*str == *str1 && *str != '\0')
	{
		str++;
		str1++;

	}
	if (*str == '\0'&& *str1 == '\0')
		return 0;
	if (*str > *str1)
		return 1;
	else
		return -1;

	
}

int main()
{
	char arr[10] = "abcd";
	char arr1[10] = "abk";
	int ret = my_strcmp(arr, arr1);
	printf("%d\n", ret);
	system("pause");
	return 0;
}