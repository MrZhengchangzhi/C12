#define _CRT_SECURE_NO_WARNINGS 1.

#include "game2.h"

void menu()
{
	printf("************************\n");
	printf("************************\n");
	printf("**  1.Play     0.Exit **\n");
	printf("************************\n");
	printf("************************\n");
}

void Game2()
{
	int mine = MINE;
	char board[ROW][COL];
	srand((unsigned int)time(NULL));
	//��ʼ������
	Initboard(board,ROW,COL);
	//��ӡ����
	//Displayboard(board, ROW, COL);
	//������
	Loard_mine(board, ROW - 2, COL - 2);
	//Displayboard(board, ROW - 2, COL - 2);
	while (1)
	{
		Player_move(board, ROW-2, COL-2);
		Displayboard(board, ROW-2, COL-2);
	}
	
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Game2();
			break;
		case 0:
			printf("��Ϸ�˳�\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while(input);
	return 0;
}