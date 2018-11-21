#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingo.h"
#include "printbingo.h"
#include "processbingo.h"
#include "countbingo.h"
#define N 5
#define M 1

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	
	int bingo[N][N];
	int mybingo[N][N];
	int combingo[N][N];
	int sum;
	int turn = 1;
	int num;
	
	srand((unsigned)time(NULL)); //���� �߻�  
	
	printf("|--------BINGO ���ӹ��--------|\n\n");
	printf("1. ���ڸ� �ϳ� �Է��ϼ���.\n");
	printf("2. ���� ���� �Է½õ� ���� ����\n");
	printf("3. ���� ���ڸ�ŭ �Ǹ� �¸�\n\n");
	printf("|--------Are you Ready?--------|\n\n"); 
	
	initiate_bingo(mybingo);
	initiate_bingo(combingo); // ������ ����  
	
	while (1)
	{
		print_bingo(mybingo);
	    print_bingo(combingo);  // ������ ���  
	    
	    num = get_number_byMe(mybingo); //�� ��ȣ �ޱ�  
	    process_bingo(mybingo, num);
	    process_bingo(combingo, num); // ���� ����  
	    
	    num = get_number_byCom(combingo); //��ǻ�� ��ȣ �ޱ�  
	    process_bingo(mybingo, num);
	    process_bingo(combingo, num); // ���� ����  
	    
	    if (count_bingo(mybingo, sum) == M)
	    {
	    	printf("���� %d���� ����� �¸��Դϴ�.\n", turn);
	    	break;
		}
		if (count_bingo(combingo, sum) == M)
		{
			printf("���� %d���� ��ǻ���� �¸��Դϴ�.\n", turn);
			break;
		} // ���� ����  
	}
	return EXIT_SUCCESS; // ���� ����  
}
