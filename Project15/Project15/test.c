#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
	//int a;//int 类型变量a；
	//int *a;//int *变量a;
	//int arr[3]//arr是包含三个int元素的数组
	//	int(*arr)[3];/// arr是一个指向包含三个int元素的数组的指针变量


	//int *p_int;//指向int类型变量的指针
	//double *p_double;//指向double类型变量的指针
	//struct student *p_student;//结构体类型指针
	//int(*p_fun)(int, int);//返回类型位int，有两个int形参的函数指针
	//int(*p_arr)[3];//指向含有3个元素的指针
	//int** p_pointer;//指向一个整形变量指针的变量


	//char *arr[3] = { "asc", "asd", "sac" };
	//printf("%s", *arr);


//}
	//void print_arr1(int arr[3][5], int row, int col)
	//{
	//	int i = 0;   
	//	for (i = 0; i<row; i++)    
	//	{
	//		for (j = 0; j<col; j++)

	//		{
	//			printf("%d ", arr[i][j]);
	//		}        printf("\n");
	//	}
	//}
	//void print_arr2(int(*arr)[5], int row, int col)
	//{ 
	//	
	//	int i = 0;    
	//	for (i = 0; i<row; i++)    
	//	{
	//		for (j = 0; j<col; j++)        
	//		{ 
	//			printf("%d ", arr[i][j]); }       
	//		printf("\n");
	//	}
	//} 
	//int main() {
	//	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 
	//	print_arr1(arr, 3, 5);   
	//	//数组名arr，表示首元素的地址   
	//	//但是二维数组的首元素是二维数组的第一行  
	//	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址    
	//	//可以数组指针来接收   
	//	print_arr2(arr, 3, 5);   
	//	return 0; }


	//void test(int arr[])//ok?
	//{
	//	
	//} 
	//void test(int arr[10])//ok?
	//{} 
	//void test(int *arr)//ok
	//{} 
	//void test2(int *arr[20])//ok
	//{} 

	//	void test2(int **arr)//ok
	//{} 
	//int main() 
	//{  
	///*	int arr[10] = {0}; */
	//	int *arr2[20] = {0};   
	//	/*test(arr);  */ 
	//	test2(arr2);
	//}


//void test(int *arr)//ok看成错
//{} 
//void test(int* arr[5])//ok
//{}
//void test(int (*arr)[5])//ok
//{}
//void test(int **arr)//是错误的、
//
//{} 
//int main()
//{   
//	int arr[3][5] = {0};  
//	test(arr); 
//	return 0;
//}
//
//


//int main()
//{
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(a + 0)); 
	//printf("%d\n", sizeof(*a)); 
	//printf("%d\n", sizeof(a + 1));
	//printf("%d\n", sizeof(a[1]));
	//printf("%d\n", sizeof(&a)); 
	//printf("%d\n", sizeof(*&a)); 
	//printf("%d\n", sizeof(&a + 1));
	//printf("%d\n", sizeof(&a[0]));
	//printf("%d\n", sizeof(&a[0] + 1));


	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr + 0));
	//printf("%d\n", sizeof(*arr)); 
	//printf("%d\n", sizeof(arr[1]));
	//printf("%d\n", sizeof(&arr)); 
	//printf("%d\n", sizeof(&arr + 1));
	//printf("%d\n", sizeof(&arr[0] + 1));
	//printf("\n");
	//printf("%d\n", strlen(arr));
	//printf("%d\n", strlen(arr + 0)); 
	///*printf("%d\n", strlen(*arr)); */
	////printf("%d\n", strlen(arr[1]));
	//printf("%d\n", strlen(&arr));
	//printf("%d\n", strlen(&arr + 1));
	//printf("%d\n", strlen(&arr[0] + 1));


	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr + 0)); 
	//printf("%d\n", sizeof(*arr));
	//printf("%d\n", sizeof(arr[1])); 
	//printf("%d\n", sizeof(&arr));
	//printf("%d\n", sizeof(&arr + 1)); 
	//printf("%d\n", sizeof(&arr[0] + 1));

	//printf("%d\n", strlen(arr));
	//printf("%d\n", strlen(arr + 0)); 
	////printf("%d\n", strlen(*arr)); 
	////printf("%d\n", strlen(arr[1])); 
	//printf("%d\n", strlen(&arr)); 
	//printf("%d\n", strlen(&arr + 1));
	//printf("%d\n", strlen(&arr[0] + 1));

	//char *p = "abcdef";
	//printf("%d\n", sizeof(p));
	//printf("%d\n", sizeof(p + 1)); 
	//printf("%d\n", sizeof(*p)); 
	//printf("%d\n", sizeof(p[0])); 
	//printf("%d\n", sizeof(&p)); 
	//printf("%d\n", sizeof(&p + 1)); 
	//printf("%d\n", sizeof(&p[0] + 1));

	//printf("%d\n", strlen(p)); 
	//printf("%d\n", strlen(p + 1));
	///*printf("%d\n", strlen(*p));
	//printf("%d\n", strlen(p[0])); */
	//printf("%d\n", strlen(&p));
	//printf("%d\n", strlen(&p + 1));
	//printf("%d\n", strlen(&p[0] + 1)); 

	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(a[0][0]));
	//printf("%d\n", sizeof(a[0]));
	//printf("%d\n", sizeof(a[0] + 1));
	//printf("%d\n", sizeof(*(a[0] + 1)));
	//printf("%d\n", sizeof(a + 1));
	//printf("%d\n", sizeof(*(a + 1)));
	//printf("%d\n", sizeof(&a[0] + 1)); 
	//printf("%d\n", sizeof(*(&a[0] + 1))); 
	//printf("%d\n", sizeof(*a));
	//printf("%d\n", sizeof(a[3]));


	//int a[5] = { 1, 2, 3, 4, 5 }; 
	//int *ptr = (int *)(&a + 1); 
	//printf("%d,%d", *(a + 1), *(ptr - 1));


//		
//	system("pause");
//	return 0;
//}


//struct Test { 
//	int Num;   
//	char *pcName;  
//	short sDate;   
//	char cha[2];   
//	short sBa[4];
//}*p;


//int main() {
//	printf("%p\n", p + 0x1);
//
//	printf("%p\n", (unsigned long)p + 0x1); 
//	printf("%p\n", (unsigned int*)p + 0x1); 
//	system("pause");
//	return 0;
//}


//int main() {
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	system("pause");
//	return 0;
//
//}
//
//int main(int argc, char * argv[])
//{ 
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int *p;
//	p = a[0]; 
//	printf("%d", p[0]);
//	system("pause");
//	return 0;
//}

//int main() {
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	system("pause");
//	return 0;
//}


//int main() { 
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1)); 
//	system("pause");
//	return 0;
//}

//int main() {
//	char *a[] = { "work", "at", "alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	system("pause");
//	return 0;
//}


int main() 
{ 
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" }; 
	char**cp[] = { c + 3, c + 2, c + 1, c };
	char***cpp = cp;  
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp + 3);
	printf("%s\n", *cpp[-2] + 3); 
	printf("%s\n", cpp[-1][-1] + 1);
	system("pause");
	return 0;
}