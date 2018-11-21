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
	
	srand((unsigned)time(NULL)); //난수 발생  
	
	printf("|--------BINGO 게임방법--------|\n\n");
	printf("1. 숫자를 하나 입력하세요.\n");
	printf("2. 같은 숫자 입력시도 공격 인정\n");
	printf("3. 빙고가 숫자만큼 되면 승리\n\n");
	printf("|--------Are you Ready?--------|\n\n"); 
	
	initiate_bingo(mybingo);
	initiate_bingo(combingo); // 빙고판 형성  
	
	while (1)
	{
		print_bingo(mybingo);
	    print_bingo(combingo);  // 빙고판 출력  
	    
	    num = get_number_byMe(mybingo); //내 번호 받기  
	    process_bingo(mybingo, num);
	    process_bingo(combingo, num); // 빙고 실행  
	    
	    num = get_number_byCom(combingo); //컴퓨터 번호 받기  
	    process_bingo(mybingo, num);
	    process_bingo(combingo, num); // 빙고 실행  
	    
	    if (count_bingo(mybingo, sum) == M)
	    {
	    	printf("빙고 %d개로 당신의 승리입니다.\n", turn);
	    	break;
		}
		if (count_bingo(combingo, sum) == M)
		{
			printf("빙고 %d개로 컴퓨터의 승리입니다.\n", turn);
			break;
		} // 승자 도출  
	}
	return EXIT_SUCCESS; // 빙고 종료  
}
