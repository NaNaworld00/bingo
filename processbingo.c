#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 5

int process_bingo(int bingo[N][N], int num)
{
	int count = 0, turn = 1;
	int data, Cdata;
	int i, j;
	int sum[12]; // ���� ����  
	
	while (1)
	{
		printf("|----------BINGO Game----------|\n\n");
		
		get_number_byMe(bingo);
		get_number_byCom(bingo); // ����ڿ� ��ǻ�� ���� �Է� ���� 
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
