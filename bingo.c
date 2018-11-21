#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int initiate_bingo(int bingo[N][N])
{
	int i=0;
	int j=0;
	int temp[N*N]={0};
	int tem; // ���� ����  
	
	for (i=0; i<N; i++)
	{
		for (j=0; j<N; j++)
		{
		   bingo[i][j] = 0; // ������ �ʱ�ȭ  
		}	
	}
	
	for (i=0; i<N*N; i++)
	{
		temp[i] = 0; // temp �ʱ�ȭ  
	}
	
	for (i=0; i<N; i++)
	{
		for (j=0; j<N; j++)
		{	
			while (1)
			{ 	
				tem = rand()%(N*N)+1; // ������ �Է� ���� �߻�  
				if (temp[tem- 1] == 0) // ���� ������ �� ä������ �� : 0 
				{	
					bingo[i][j] = tem;
					temp[tem - 1] = 1; // �Է¹��� ������ ĭ�� 1 ����  
					break;
				}
			}
		}
		
		
	}
	return bingo[N][N];
}

