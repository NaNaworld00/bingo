#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void initiate_bingo(int bingo[N][N]){
	
	int i = 0, j = 0;
	
	for (i=0; i<N*N; i++){
		for (j=0; j<N*N; j++)
		bingo[i][j] = 0;
	}
}
void print_bingo(int bingo[N][N]){
	int i, j;
	
	for (i=0; i<N*N; i++){
		for (j=0; j<N*N; j++){
			if ((bingo[i][j]) != -1) {
				printf("7%d", bingo[i][j]);
			}
		}
	}
}

void process_bingo(){
	int bingo[N][N];
	int count;
	
	while (1) {
		count = 
	}
}

void get_number_byMe();

void get_number_byCom();

void count_bingo();

int main(int argc, char *argv[]) {
	
	int bingo[N][N];
	
	void initiate_bingo(int bingo[N][N]);
	void print_bingo(int bingo[N][N]);
	
	return 0;
}
