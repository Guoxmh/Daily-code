#define _CRT_SECURE_NO_WARNINGS 1
//ɨ����Ϸ

#include"game_2.h"
void menu()
{

	printf("**************************************\n");
	printf("******* 1.play       0.exit **********\n");
	printf("**************************************\n");
}
int game()
{
	//������������
	//��ʼ������
	//��ӡ����
	//����
	//���
	//�ж�
	int ret = 0;
	int x = 0;
	int y = 0;
	int num = 0;
	srand((unsigned int)time(NULL));
	//������������
	char mine[ROWS][COLS] = { '0' };
	char show[ROWS][COLS] = { '*' };
	//��ʼ����������
	Initboard(mine, ROWS, COLS,'0');
	Initboard(show, ROWS, COLS,'*');
	//�������������������
    set_mine(mine, ROWS, COLS);
	Display(mine, ROW, COL);
	Display(show, ROW, COL);
	printf("����������");
	scanf("%d%d", &x, &y);
	//�ж��ǲ����� ������׾�����ѭ�� ��ʼ�����̣��������ף������һ��������
	ret = check_mine(mine, x, y);
	while (ret == -1)
	{
		Initboard(mine, ROWS, COLS, '0');
		set_mine(mine, ROWS, COLS);
		ret = check_mine(mine, x, y);
	}
	play(mine, show, x, y);
	Display(mine, ROW, COL);
	Display(show, ROW, COL);
	
	while (1)
	{
		printf("����������");
		scanf("%d%d", &x, &y);
	
		
		//show[x][y] = check_mine(mine, x, y ) +'0';
		
		ret = check_mine(mine, x, y);
		if (ret != -1)
		{
		/*	ret = check_mine(mine, x, y);*/
			play(mine, show, x, y);
			Display(show, ROW, COL);
		}
		if (ret == -1)
		{
			return 0;
			Display(mine, ROW, COL);
		}
		if (jude(show, ROW, COL) == 1)
			break;
	}
	return 1;

}

int main()
{
	int input = 0;
	menu();
	
	do
	{
		
		printf("��ѡ��>");
		scanf("%d", &input);


		switch (input)
		{
		case 1:
			if (game())
			{
				printf("��Ӯ��\n");
			}
			else
			{

				printf("������\n");
				menu();
			}
			break;
		case 0: printf("�˳���Ϸ\n");
			break;
		default:printf("������ѡ��\n");
		
		}
	} while (input);

	system("pause");
	return 0;

}