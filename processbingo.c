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
	int sum[12]; // ���� ����  
	
	while (1)
	{
		printf("|----------BINGO Game----------|\n");
		printf("\n");
		printf("1~N*N ���� ���� ����\n");
		scanf("%d", &data);
		printf("\n");
		
		if (data>=1 && data<=N*N)
		{
			printf("%d��° ����\n\n", turn);
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
			printf("ERROR ���Է�\n", turn); // get number �Լ� �κ�  
		}
		count = count_bingo(sum); // ���� �� ����  
		for (i=0; i<N; i++)
		{
			for (j=0; j<N; j++)
			{
				printf("%5d", bingo[i][j]); // n��° ���� ���� ������ ���  
			}
			putchar('\n');
		}
	}
}
