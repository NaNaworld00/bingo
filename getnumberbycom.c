#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 5

int get_number_byCom(int bingo[N][N])
{
	int i, j;
	int Cdata;
	int turn = 1; //변수 선언  
	
	if (Cdata>=1 && Cdata<=N*N)
		{
			Cdata = rand()%(N*N)+1; //난수 발생  
			for (i=0; i<N; i++)
			{
				for (j=0; j<N; j++)
				{
					if(bingo[i][j]==Cdata)
					{
						bingo[i][j]= -1; // 입력받은 값이 빙고판 값고 일치하면 그 자리에 -1 받음 
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
