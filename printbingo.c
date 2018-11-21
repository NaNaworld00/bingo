#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void print_bingo(int bingo2[N][N]) {
	
	int i;
	int j; //변수 선언  
	
	for (i=0; i<N; i++)
	{
		for (j=0; j<N; j++)
		{
			printf("%6d", bingo2[i][j]); // 빙고판 출력  
		}
		printf("\n");
    }
    printf("\n");
}
