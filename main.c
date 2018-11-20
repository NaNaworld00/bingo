#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingo.h"
#include "printbingo.h"
#define N 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	
	int bingo[N][N];
	
	int mybingo[N][N];
	int combingo[N][N];
	
	srand((unsigned)time(NULL));
	
	printf("BINGO ���ӹ��\n");
	printf("1. ���ڸ� �ϳ� �Է��ϼ���.\n");
	printf("2. ���� ���� �Է½õ� ���� ����\n");
	printf("3. �����Է½� ������ ����ϴ�.\n");
	printf("4. ���� ���ڸ�ŭ �Ǹ� �¸�\n");
	
	printf("Are you Ready?\n"); 
	
	initiate_bingo(mybingo);
	initiate_bingo(combingo);
	print_bingo(mybingo);
	print_bingo(combingo);
	process_bingo(mybingo);
	process_bingo(combingo);
	
	return EXIT_SUCCESS;	
}
