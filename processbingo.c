#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 5

int process_bingo(int bingo[N][N], int num)
{
	int count = 0, turn = 1;
	int data;
	int i, j;
	int sum[12]; // 변수 선언  
	
	while (1)
	{
		printf("|----------BINGO Game----------|\n");
		printf("\n");
		printf("1~N*N 까지 정수 선택\n");
		scanf("%d", &data);
		printf("\n");
		
		if (data>=1 && data<=N*N)
		{
			printf("%d번째 공격\n\n", turn);
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
			turn++;
		}
		else
		{
			printf("ERROR 재입력\n", turn); // get number 함수 부분  
		}
		count = count_bingo(sum); // 빙고 수 세기  
		for (i=0; i<N; i++)
		{
			for (j=0; j<N; j++)
			{
				printf("%5d", bingo[i][j]); // n번째 공격 끝난 빙고판 출력  
			}
			putchar('\n');
		}
	}
}
