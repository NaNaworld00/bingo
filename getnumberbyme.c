#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 5

int get_number_byMe(int bingo[N][N])
{
	int i, j;
	int data;
	int turn = 1; //변수 선언  
	
	if (data>=1 && data<=N*N) // 입력 숫자 범위  
		{
			printf("%d번째 공격\n\n", turn);
			for (i=0; i<N; i++)
			{
				for (j=0; j<N; j++)
				{
					if(bingo[i][j]==data) // 입력한 숫자가 빙고판의 숫자와 같으면 그 자리에 -1 출력  
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
			printf("ERROR 재입력\n", turn); //오류일 경우 메세지 출력  
		}
}
