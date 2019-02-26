#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{ 
//	int n=10;
//	int m = 1;
//	int t = 0;
//	t = n;
//	n = m;
//	m = t;
//	printf("%d %d\n",n,m);
//	system("pause");
//	return  0;
//}
//int main()
//{
//	int n = 10;
//	int m = 1;
//	n = m + n;
//	m = n - m;
//	n = n - m;
//	printf("%d %d",n,m);
//	system("pause");
//
//	return 0;
//
//}
//int main()
//{
//	int n = 10;
//	int m = 1;
//	m = m^n;
//	n= m^n;
//	m = m^n;
//	printf("%d %d\n", n, m);
//	system("pause");
//
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
//	int i = 0;
//	int a = 0;
//	a = arr[0];
//	for (i=1; i < 10; i++)
//	{
//		if (arr[i]>a){
//			a = arr[i];
//
//		}
//	}
//	printf("正确最大值9\n计算最大值%d\n", a);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 40;
//	int b = 30;
//	int c = 10;
//	if (a > b){
//		a = a^b;
//		b = a^b;
//		a = a^b;
//	}
//	if (a > c){
//		a = a^c;
//		c = a^c;
//		a = a^c;
//	}
//	if (b > c)
//	{
//		b = b^c;
//		c = b^c;
//		b = b^c;
//	}
//
//	
//	printf("%d<%d<%d\n",a,b,c);
//	system("pause");
//	return 0;
//}
void swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main()
{
	int a = 10;
	int b = 90;
	int c = 30;
	if (a > b)
		swap(&a, &b);
	if (a > c)
		swap(&a, &c);
	if (b > c)
		swap(&b, &c);
	    printf("%d<%d<%d\n", a, b, c);
		system("pause");

	return 0;
}
//int main()
//{//辗转相除法
//	int m = 10;
//	int n = 4;
//	int r = 0;
//	r = m%n;
//	while (r){
//		m = r;
//		r = n%r;
//
//	}
//	printf("正确最大公约数是2\n计算最大公约数为%d\n",m );
//	system("pause");
//	return 0;
//
//}
//

