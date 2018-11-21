#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 5

int get_number_byCom(int bingo[N][N])
{
	int i, j;
	int Cdata; //변수 선언  
	
	while (1)
	{
		if (Cdata = rand()%(N*N)+1)
		{
			for (i=0; i<N; i++)
			{
				for (j=0; j<N; j++)
				{
					if (bingo[i][j] == Cdata)
					{
						bingo[i][j] = -1;
						break;
				    }
		        }
	        }
        }
        else if (bingo[i][j] != Cdata)
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
