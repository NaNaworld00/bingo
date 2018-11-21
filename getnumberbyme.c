#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 5

int get_number_byMe(int bingo[N][N])
{
	int i, j;
	int data;
	
	while (1)
	{
		printf("1~N*N 까지 정수 선택\n");
		scanf("%d", &data);
		
		if (data>=1 && data<=N*N)
		{
			for (i=0; i<N; i++)
			{
				for (j=0; j<N; j++)
				{
					if (bingo[i][j] == data)
					{
						bingo[i][j] = -1;
						break;
					}
				}
			}
		}
		else if (bingo[i][j] != data)
		{
			printf("ERROR");
		}
		else
		{
			printf("ERROR");
		}
		break; 
	}
}
