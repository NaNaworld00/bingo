#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 5

int get_number_byCom(int bingo[N][N])
{
	int i, j;
	int Cdata;
	int turn = 1; //���� ����  
	
	if (Cdata>=1 && Cdata<=N*N)
		{
			Cdata = rand()%(N*N)+1; //���� �߻�  
			for (i=0; i<N; i++)
			{
				for (j=0; j<N; j++)
				{
					if(bingo[i][j]==Cdata)
					{
						bingo[i][j]= -1; // �Է¹��� ���� ������ ���� ��ġ�ϸ� �� �ڸ��� -1 ���� 
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
