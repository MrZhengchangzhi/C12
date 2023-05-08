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
	//初始化棋盘
	Initboard(board,ROW,COL);
	//打印棋盘
	//Displayboard(board, ROW, COL);
	//加载雷
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
		printf("请选择>:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Game2();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while(input);
	return 0;
}