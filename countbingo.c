#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 5

int count_bingo(int bingo[N][N], int sum)
{
	int i, j;
	int count = 0;
	int ROWS, COLS, CROSS_1, CROSS_2; //변수 선언(가로, 세로, 왼쪽 대각선, 오른쪽 대각선) 
	
	for (i=0; i<N; i++) //가로, 왼쪽 오른쪽 대각선 세기  
	{
		ROWS = 0; // 가로 초기화  
		for (j=0; j<N; j++)
		{
			if (bingo[i][j] == -1)
			{
				ROWS++;
			}
			if (i==j) //왼쪽 대각선  
			{
				if (bingo[i][j] == -1)
				{
					CROSS_1++;
				}
		    }
			if ((i+j)==N-1) // 오른쪽 대각선  
			{
				if (bingo[i][j] == -1)
				{
					CROSS_2++;
				}
			}
			if (ROWS==N)
			{
				count++;
			}
		}
	}
	
	for (j=0; j<N; j++) // 세로 빙고 세기  
	{
		COLS = 0; // 세로 초기화  
		for (i=0; i<N; i++)
		{
			if (bingo[i][j]==-1)
			{
				COLS++;
			}
			if (COLS==N)
			{
				count++;
			}
		}
	}
	sum = count + (CROSS_1/5) + (CROSS_2/5); // 빙고 수 합산 (대각선 -1 개수 5로 나누기) 
	
	return sum;
}
