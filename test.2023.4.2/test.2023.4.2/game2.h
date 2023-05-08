#pragma once

#include <stdio.h>
#include <string.h>
#include <time.h>

#define ROW 11
#define COL 11 
#define MINE 10
void Initboard(char board[ROW][COL], int row, int col);
void Displayboard(char board[ROW][COL], int row, int col);
void Player_move(char board[ROW][COL], int row, int col);