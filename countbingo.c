#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 5

int count_bingo(int bingo[N][N], int sum)
{
	int i, j;
	int count = 0;
	int ROWS, COLS, CROSS_1, CROSS_2; //���� ����(����, ����, ���� �밢��, ������ �밢��) 
	
	for (i=0; i<N; i++) //����, ���� ������ �밢�� ����  
	{
		ROWS = 0; // ���� �ʱ�ȭ  
		for (j=0; j<N; j++)
		{
			if (bingo[i][j] == -1)
			{
				ROWS++;
			}
			if (i==j) //���� �밢��  
			{
				if (bingo[i][j] == -1)
				{
					CROSS_1++;
				}
		    }
			if ((i+j)==N-1) // ������ �밢��  
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
	
	for (j=0; j<N; j++) // ���� ���� ����  
	{
		COLS = 0; // ���� �ʱ�ȭ  
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
	sum = count + (CROSS_1/5) + (CROSS_2/5); // ���� �� �ջ� (�밢�� -1 ���� 5�� ������) 
	
	return sum;
}
