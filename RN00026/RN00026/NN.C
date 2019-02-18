//#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<assert.h>

//int my_strlen(const char *str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(const char *str)
//{
//	
//	assert(str != NULL);
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(str + 1);
//	
//	}
//
//}
//int my_strlen(const char *str)
//{
//	assert(str != NULL);
//	int count = 0;
//	if (*str =='\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}
//
//int main()
//{
//	char str[] = "abio90cd";
//	int ret = 0;
//	ret = my_strlen(str);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}


//void test2(int *arr[20])//ok?
//{} 
//	void test2(int **arr)//ok? 
//	{}
//	
//int main() 
//{    
//		int arr[10] = {0};   
//		int *arr2[20] = {0};   
//	
//		test2(arr2); 
//	     system("pause");
//	      return 0;
//}
//
//int main()
//{
//
//	/*char *arr[] = { "a", "b", "x" };
//	printf("%c\n", *arr[1]);*/
//	//int a = 0;
//	//int b = 0;
//	//int c = 8;
//
//	char arr[] = { '1', '2', '4' };
//	printf("%c\n", arr[0]);
//	printf("%c\n", arr[1]);
//	printf("%c\n", arr[2]);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//int arr[4][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } ,1,2,3,4};
//	//int ret = sizeof(arr) / sizeof(arr[0]);
//	//printf("%d", ret);
//	char arr[5][4] = { "qwe", "abc", "efg", "hij", "lmn" };
//	char(*p)[4] = arr;
//	printf("%s\n", p[2]);
//	printf("%s\n", arr[2]);
//	printf("%c\n", p[1][1] );
//	printf("%s\n", *(p+2));//efg
//	printf("%s\n", arr+2);  // efg
//	printf("%c\n", p[2][2]); //g
//	printf("%c\n", *(*(p + 2) + 2));//g
//	printf("%c\n", *(*(p + 1) + 1)); //b
//
//
//	system("pause");
//	return 0;
//}


//数组打印
//void print_array(const char **p, const int *len)
//{
//	for (int i = 0; i<*len; i++)
//	{
//		printf("%s\n", p[i]);
//	}
//}
//
////元素排序
//int sort(char **p, int *len)
//{
//	char **str = p;
//	int *count = len;
//	char *tmp = NULL;
//	//函数返回值
//	int ret = 0;
//	if (str == NULL || len == NULL)
//	{
//		printf("function sort error");
//		return ret;
//	}
//	for (int i = 0; i<*count; i++)
//	{
//		for (int j = i + 1; j<*count; j++)
//		{
//			if (strcmp(str[i], str[j])>0)
//			{
//				tmp = str[i];
//				str[i] = str[j];
//				str[j] = tmp;
//			}
//		}
//	}
//	return ret;
//}
//
//int main(void)
//{
//	char *array[] = { "sdjd", "asdjf", "peroa", "asoeq" };
//	int count = sizeof(array) / sizeof(array[0]);
//	//排序前打印
//	print_array(array, &count);
//	//调用排序函数
//	sort(array, &count);
//	//排序后打印
//	printf("排序后打印\n");
//	print_array(array, &count);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char *array[] = { "sdjd", "asdjf", "peroa", "asoeq" };
//	int count = sizeof(array) / sizeof(array[0]);
//	printf("%p\n",array );
//	printf("%p\n",array[0] );
//	printf("%s\n",array[0] );
//	printf("%s\n",array[1] );
//	printf("%s\n", *(array+3));
//	system("pause");
//	return 0;
//}
//int add(int a, int b){
//	return a + b;
//}
//int sub(int a, int b){
//	return a - b;
//}
//int mul(int a, int b){
//	return a*b;
//}
//int di(int a, int b){
//	return a / b;
//}
//void make_menu(){
//	printf("****************************\n");
//	printf("请选择菜单：\n");
//	printf("1：加 2：减 3：乘 4：除 0：退出 \n");
//}
///*定义函数指针数组变量
//(int,int) 对应于函数指针数组 指向的函数列表
//*/
//int(*fun_array[4]) (int, int) = { add, sub, mul, di };
//
//int main(){
//	int i, j;
//	int cmd;
//	while (1){
//		make_menu();
//		scanf("%d", &cmd);
//		if (cmd == 0){
//			break;
//		}
//		if (cmd >= 1 && cmd <= 4){
//			printf("请输入2个数字:");
//			scanf("%d%d", &i, &j);
//			//通过函数指针数组去调用对应的函数
//			int result = fun_array[cmd - 1](i, j); //等同于 int result = (*fun_array[cmd-1])(i,j);
//			//通过函数指针变量来调用对应的函数
//			//int (*p)(int,int) = fun_array[cmd-1];
//			//int  result = p(i,j);
//			printf("result:%d\n", result);
//		}
//	}
//
//	return 0;
//}