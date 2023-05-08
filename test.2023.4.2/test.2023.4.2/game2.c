#define _CRT_SECURE_NO_WARNINGS 1.

#include "game2.h"

void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = '0';
		}
	}
}

void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf("%c", board[i][j]);
		}
		printf("\n");
	}
}

void Loard_mine(char board[ROW][COL], int row, int col)
{
	int mine = MINE;
	
	while (mine)
	{
		int x = rand()%row;
	    int y = rand()%col;
		if (board[x][y] == '0')
		{
			board[x][y] = '*';
			mine--;
		}
	}	
}

void Player_move(char board[ROW][COL], int row, int col)
{
	int x = 1;
	int y = 1;
	
	while (1)
	{
		printf("ÇëÊäÈë×ø±ê>:\n");
	    scanf("%d%d", &x, &y);
		if (board[x - 1][y - 1] != '*')
		{
			board[x][y] = '1';
		}
		else
		{
			break;
		}
	}
}

