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
	
	printf("BINGO 게임방법\n");
	printf("1. 숫자를 하나 입력하세요.\n");
	printf("2. 같은 숫자 입력시도 공격 인정\n");
	printf("3. 문자입력시 에러가 생깁니다.\n");
	printf("4. 빙고가 숫자만큼 되면 승리\n");
	
	printf("Are you Ready?\n"); 
	
	initiate_bingo(mybingo);
	initiate_bingo(combingo);
	print_bingo(mybingo);
	print_bingo(combingo);
	process_bingo(mybingo);
	process_bingo(combingo);
	
	return EXIT_SUCCESS;	
}
