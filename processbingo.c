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
	int sum[12]; // 변수 선언  
	
	while (1)
	{
		printf("|----------BINGO Game----------|\n\n");
		
		get_number_byMe(bingo);
		get_number_byCom(bingo); // 사용자와 컴퓨터 숫자 입력 받음 
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
