#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int acceptUserInteger();
void print2dMatrix(int rows, int columns, int matrix[][columns]);
void populate2dMatrix(int rows, int columns, int matrix[][columns]);
void transposeMatrix(int rows, int columns, int matrix[][columns], int transposed[][rows]);

int main(void) {
	int rows, columns;
	
	printf("Enter rows count: ");
	rows = acceptUserInteger();
	
	printf("Enter columns count: ");
	columns = acceptUserInteger();
	
	int matrix[rows][columns];
	populate2dMatrix(rows, columns, matrix);
	printf("\nOriginal matrix:\n");
	print2dMatrix(rows, columns, matrix);
	
	int transposed[columns][rows];
	transposeMatrix(rows, columns, matrix, transposed);
	printf("\nTransposed matrix:\n");
	print2dMatrix(columns, rows, transposed);
	
	return 0;
}

int acceptUserInteger() {
	int integer;
	char c;
	
	while (!scanf("%d", &integer)) {
		while ((c = getchar()) != '\n');
		printf("Not integer. Try again: ");
	}
	
	return integer;
}

void print2dMatrix(int rows, int columns, int matrix[][columns]) {
	int i, j;
	
	for (i = 0; i < rows; i++) {
		for (j = 0; j < columns; j++) {
			printf("(%d, %d): %d\t", i, j, matrix[i][j]);
		}
		printf("\n");
	}
}

void populate2dMatrix(int rows, int columns, int matrix[][columns]) {
	int i, j;
	
	srand(time(NULL));
	for (i = 0; i < rows; i++) {
		for (j = 0; j < columns; j++) {
			matrix[i][j] = rand();
		}
	}
}

void transposeMatrix(int rows, int columns, int matrix[][columns], int transposed[][rows]) {
	int i, j;
	
	for (i = 0; i < columns; i++) {
		for (j = 0; j < rows; j++) {
			transposed[i][j] = matrix[j][i];
		}
	}
}
