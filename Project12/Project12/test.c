#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
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
//	//ָ��
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
		printf("�ҵ�\n");
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
				printf("�ҵ�\n");
				break;
				}
				else if (*(*(str+i-1+j)+(i-1)) == tmp)
				{
				printf("�ҵ�\n");
				break;

				}
				else
				printf("��bu��\n");
				break;
			}
			}
		}

	}

	int main()
	{
	int arr[][3] = { 1, 2, 3, 2, 3, 4, 3, 4, 5 };
	int num = 0;
	printf("������Ҫ���ҵ�����:>");
	scanf("%d", &num);
	search(arr, num, 4, 3);
	system("pause");
	return 0;
}