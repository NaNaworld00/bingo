#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 5

int get_number_byMe(int bingo[N][N])
{
	int i, j;
	int data;
	int turn = 1; //���� ����  
	
	if (data>=1 && data<=N*N) // �Է� ���� ����  
		{
			printf("%d��° ����\n\n", turn);
			for (i=0; i<N; i++)
			{
				for (j=0; j<N; j++)
				{
					if(bingo[i][j]==data) // �Է��� ���ڰ� �������� ���ڿ� ������ �� �ڸ��� -1 ���  
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
			printf("ERROR ���Է�\n", turn); //������ ��� �޼��� ���  
		}
}
