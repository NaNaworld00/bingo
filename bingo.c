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
	int tem; // 변수 정의  
	
	for (i=0; i<N; i++)
	{
		for (j=0; j<N; j++)
		{
		   bingo[i][j] = 0; // 빙고판 초기화  
		}	
	}
	
	for (i=0; i<N*N; i++)
	{
		temp[i] = 0; // temp 초기화  
	}
	
	for (i=0; i<N; i++)
	{
		for (j=0; j<N; j++)
		{	
			while (1)
			{ 	
				tem = rand()%(N*N)+1; // 빙고판 입력 난수 발생  
				if (temp[tem- 1] == 0) // 아직 빙고판 안 채워졌을 때 : 0 
				{	
					bingo[i][j] = tem;
					temp[tem - 1] = 1; // 입력받은 빙고판 칸에 1 받음  
					break;
				}
			}
		}
		
		
	}
	return bingo[N][N];
}

