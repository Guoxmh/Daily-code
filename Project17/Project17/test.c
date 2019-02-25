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
//{    //最后还需要注意的是，为什么函数的“c”参数是 int 类型，而不是“char”类型呢？
//    //其实原因很简单，这里用的是字符的 ASCII 码（因为每个字符都对应着一个 ASCII 码）
//	//	，这样在传值的时候既可以传“char”类型的值，又可以传“int”类型的值（0~127）。
//	char arr[10] = "abcdrf";
//	char *ret = strchr(arr, 'r');
//	printf("%c\n", *ret);
//
//	system("pause");
//	return 0;
//}

//char *my_strchr(char *str, int ch )
//{
//	////包含了*str和c都为0的情况
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

//大于返回1
//等于返回0
//小于返回-1

//int my_strcmp(char *str, char *str1)
//{
//	assert(str);
//	assert(str1);
//	while (*str == *str1 && *str != '\0')
//	{
//		str++;
//		str1++;
//
//	}
//	if (*str == '\0'&& *str1 == '\0')
//		return 0;
//	if (*str > *str1)
//		return 1;
//	else
//		return -1;
//
//	
//}
//
//int main()
//{
//	char arr[10] = "abcd";
//	char arr1[10] = "abk";
//	int ret = my_strcmp(arr, arr1);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}


//1.source和destin所指内存区域不能重叠，函数返回指向destin的指针。
//2.与strcpy相比，memcpy并不是遇到'\0'就结束，而是一定会拷贝完n个字节。
//int main()
//{
//	char a[30];
//	char b[20] = "acsdfvsdvc";
//
//
//	memcpy(a, b, sizeof(b));
//	printf("%s", a);
//	system("pause");
//	return 0;
//}
//void *my_memcpy(void *dest,const void *src, size_t n)
//{
//	assert(dest);
//	assert(src);
//	char *start = (char*)dest;
//	char *start1 = (char*)src;
//	for (int i = 0; i < n; i++)
//	{
//		*(start++)= *(start1++);
//	}
//	*start = '\0';
//	return dest;
//
//}
//
//int main()
//{
//	char a[20] = { 0 };
//	char b[10] = "sabinccd";
//	my_memcpy(a, b, sizeof(b));//可以写入需要copy的字符位数。
//	printf("%s\n", a);
//	system("pause");
//	return 0;
//}



//void *memmove( void* dest, const void* src, size_t count );
//int main()
//{
//
//		char s[] = "Golden Global View";
//
//		memmove(s, s + 7, strlen(s) + 1 - 7);
//
//		printf("%s", s);
//
//		getchar();
//
//	system("pause");
//	return 0;
//}

void *my_memmove(void *dest, const void *src, size_t n)
{
	assert(dest);
	assert(src);
	
	if (dest >= src)
	{
		char *str = (char*)dest+n;
		char *str1 = (char*)src+n;
		while(n--)
		{
			*str-- = *str1--;
		}
	}
	else
	{
		char *str = (char*)dest ;
		char *str1 = (char*)src ;
		while (n--)
		{
			*str++ = *str1++;
		}
	}
	return dest;
}

int main()
{
	char s[] = "Golden Global View";
	my_memmove(s, s + 8, strlen(s) - 8 + 1);
	printf("%s", s);
    system("pause");
	return 0;
}

//void *memmove(void *dest, const void*src, int count)
//{
//	char *pdest = (char*)dest;
//	const char *psrc = (const char*)src;
//	char *ret = dest;
//	if ((pdest>psrc) && (pdest<psrc + count))
//	{
//		while (count--)
//		{
//			*(pdest + count) = *(psrc + count);
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*pdest++ = *psrc++;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	memmove(arr + 3, arr, 5 * sizeof(int)); 
//	for (i = 0; i<sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
