#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int process_bingo(int bingo[N][N])
{
	int count = 0, st = 1;
	int data;
	int i, j;
	int sum[12];
	
	while (1)
	{
		printf("BINGO Game\n");
		printf("1~N*N 까지 정수 선택\n");
		printf(">");
		scanf("%d", &data);
		
		if (data>=1 && data<=N*N)
		{
			printf("%d번째 공격\n", st);
			for (i=0; i<N; i++)
			{
				for (j=0; j<N; j++)
				{
					if(bingo[i][j]==data)
					{
						bingo[i][j]= -1;
						break;
					}
				}
			}
			st++;
		}
		else
		{
			printf("ERROR 재입력\n", st);
		}
		count = count_bingo(sum);
		for (i=0; i<N; i++)
		{
			for (j=0; j<N; j++)
			{
				printf("%7d", bingo[i][j]);
			}
			putchar('\n');
		}
	}
}
