#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int a[100], n, temp;
//
//void QuickSort(int h, int t)
//{
//	if (h >= t)
//		return;
//	int mid = (h + t) / 2, i = h, j = t, x;
//	x = a[mid];
//	while (1)
//	{
//		while (a[i] < x)
//			i++;
//		while (a[j] > x)
//			j--;
//		if (i >= j)
//			break;
//		temp = a[i];
//		a[i] = a[j];
//		a[j] = temp;
//	}
//	a[j] = x;
//	QuickSort(h, j - 1);
//	QuickSort(j + 1, t);
//	return;
//}
//
//int main()
//{
//	int i;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	/*QuickSort(0, n - 1);*/
//	for (i = 0; i < n; i++)
//		printf("%d ", a[i]);
//	system("pause");
//	return 0;
//}




//int cmp(const void *a, const void *b)
//{
//	return (*(int *)b - *(int *)a);
//}
//
//int main()
//{
//	int s[10000], n, i; 
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		s[i] = i;
//	}
//
//	qsort(s, n, sizeof(s[0]), cmp);
//
//	for (i = 0; i < n; i++)
//		printf("%d ", s[i]);
//	system("pause");
//
//	return 0;
//}


//int cmp(const void *a, const void *b)
//{
//	return *(int *)b - *(int *)a;
//}
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int a[100];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		a[i] = i;
//	}
//	qsort(a, n, sizeof(int), cmp);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d", a[i]);
//	}
//	system("pause");
//	return 0;
//}
//
//int cmp(const void *a, const void *b)
//{
//	return *(char*)b - *(char*)a;
//}
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	char a[100] = "asdfghhjja";
//
//	qsort(a, 10, sizeof(char), cmp);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%c", a[i]);
//	}
//
//	system("pause");
//	return 0;
//}


//int cmp(const void *a, const void *b)
//{
//	return *(double*)a - *(double *)b;
//}
//
//int main()
//{
//	double a[5] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
//	qsort(a, 5, sizeof(double), cmp);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%lf\n", a[i]);
//	}
//	system("pause");
//	return 0;
//}
int cmp(const void*a, const void*b)
{
	return *(int *)a - *(int *)b;
}

void swap(char *p1, char *p2, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char tmp = *((char *)p1 + i);
		*((char *)p1 + i) = *((char *)p2 + i);
		*((char *)p2 + i) = tmp;
	}
}

void my_qsort(void *base,size_t  num, size_t width ,int (*p)(const void *,const void* ))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num - i-1; j++)
		{
			if (cmp((char *)base + j*width, (char *)base + (j + 1)*width)>0)
				swap((char *)base + j*width, (char *)base + (j + 1)*width, width);
		}
	}

}




int main()
{
	int a[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		a[i] = i;
	}
	my_qsort(a, 10, sizeof(int), cmp);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);  
	}
	system("pause");
	return 0;
}