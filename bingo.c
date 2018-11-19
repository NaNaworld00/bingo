#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int initiate_bingo(int bingo[N][N])
{
	int i=0, j=0;
	long seed;
	int temp[N*N];
	int tem;
	
	seed=time(NULL);
	srand(seed);
	
	for (i=0; i<N; i++)
	{
		for (j=0; j<N; j++)
		{
		   bingo[i][j] = 0;
		}	
	}
	
	for (i=0; i<N*N; i++)
	{
		temp[i]=0;
	}
	
	for (i=0; i<N; i++)
	{
		for (j=0; j<N; j++)
		{
			while (1)
			{
				tem = (rand()%N*N)+1;
				if (temp[tem - 1] == 0)
				{
					bingo[i][j] = tem;
					temp[tem] = 1;
					break;
				}
			}
		}
	}
	return bingo[N][N];
}

