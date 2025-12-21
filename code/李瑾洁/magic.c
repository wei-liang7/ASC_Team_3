#include <stdio.h>
#define N 7

int main()
{
	printf("magic_square by ljj\n");
	int magic[N][N]={0};
	int row = 0,col = N/2;
	int i, j;

	for(i=1;i<=N*N;i++){
		magic[row][col] = i;
		int nextRow = (row - 1 + N) % N;
		int nextCol = (col + 1) % N;

		if(magic[nextRow][nextCol] == 0){
			row = nextRow;
			col = nextCol;
		}else{
			row = (row + 1) % N;
		}
	}

	for(i = 0;i < N; i++){
		for(j = 0;j < N;j++){
			printf("%4d",magic[i][j]);
		}
		printf("\n");
	}

	return 0;
}
