#include <stdio.h>
#include <stdlib.h>

void input_matrix(int **m, int row, int col);

void main(void){
	int row, col;

	printf("Enter the size of the first and second matrices.(Both matrices must be the same size.) >> ");
	scanf("%d %d", &row, &col);

	int **f_Array = malloc(sizeof(int *) * row);	
	int **s_Array = malloc(sizeof(int *) * row);	

	for (int i = 0; i < row; i++){
		f_Array[i] = malloc(sizeof(int) * col);
	}
	for (int i = 0; i < row; i++){
		s_Array[i] = malloc(sizeof(int) * col);
	}

	printf("==first==\n");
	input_matrix(f_Array, row, col);

	printf("==second==\n");
	input_matrix(s_Array, row, col);

	printf("==result==\n");
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("%d ", f_Array[i][j]+s_Array[i][j]);
		}
		printf("\n");
	}

	for(int i = 0; i < row; i++){
		free(f_Array[i]);
		free(s_Array[i]);
	}

	free(f_Array);
	free(s_Array);
}

void input_matrix(int **m, int row, int col){
	printf("Enter the values of the matrix. >>\n");
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			scanf("%d", &m[i][j]);
		}
	}
}
