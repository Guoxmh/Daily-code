#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//strncpy 
//char *my_strncpy(char *dest, const char *src, size_t count)
//{
     /* asserr(dest);
     assert(src);*/
//	char *str = dest;
//	const char *str1 = src;
//	while (count--)
//	{
//		*str++ = *str1++;
//
//	}
//	return dest;
//}
//
//
//int main()
//{
//	char a[20] = { 0 };
//	char b[10] = "abcde";
//	my_strncpy(a, b, sizeof(char)* 4);
//	printf("%s\n", a);
//	system("pause");
//	return 0;
//}

//strncat 
//char *my_strncat(char *dest, const char *src, size_t count)
//{
//	assert(dest);
//	assert(src);
//	char *str1 = dest + strlen(dest);
//	while (count--)
//	{
//		*str1++ = *src++;
//	}
//	return dest;
//}
//
//
//
//int main()
//{
//	char a[100] = "hellow ";
//	char b[10] = "world!";
//	my_strncat(a, b, 6);
//	printf("%s\n", a);
//	system("pause");
//	return 0;
//}
//int strncmp( const char *string1, const char *string2, size_t count );

int my_strncmp(const char *str1, const char *str2, size_t count)
{
	assert(str1);
	assert(str2);
	char *dest = str1;
	char *src = str2;
	while (count--)
	{
		if (*dest++ != *src++)
		{
			break;
		}
	
	}
	if (*dest == *src)
		return 0;
	if (*dest > *src)
		return 1;
	else
		return -1;

}

int main()
{
	char a[10] = "abcde";
	char b[10] = "abcde";
	int ret = my_strncmp(a,b,3);
	printf("%d\n", ret);
	system("pause");
	return 0;
}