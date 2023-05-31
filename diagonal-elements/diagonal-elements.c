#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int acceptUserInteger();
void populateArray(int count, int a[][count]);
void findDiagonalElements(int count, int a[][count], int elements[]);
void print2DArray(int count, int a[][count]);
void printArray(int count, int a[]);
int elementsSum(int cunt, int a[]);

int main(void) {
	int count = acceptUserInteger();
	
	int a[count][count];
	int diagonalElements[count];
	int sum;

	populateArray(count, a);
	printf("\nArray elements:\n");
	print2DArray(count, a);

	findDiagonalElements(count, a, diagonalElements);
	printf("\nDiagonal elements:\n");
	printArray(count, diagonalElements);
	
	sum = elementsSum(count, diagonalElements);
	printf("\n\nDiagonal elements sum: %d\n", sum);
	
	return 0;
}

int acceptUserInteger() {
	int integer, count;
	char c;
	
	printf("Enter an integer: ");
	while ((count = scanf("%d", &integer)) == 0) {
		while ((c = getchar()) != '\n');
		printf("This is not integer. Try again: ");
	}
	
	return integer;
}

void populateArray(int count, int a[][count]) {
	int i, j;

	srand(time(NULL));
	for (i = 0; i < count; i++) {
		for (j = 0; j < count; j++) {
			a[i][j] = rand();
		}
	}
}

void print2DArray(int count, int a[][count]) {
	int i, j;

	for (i = 0; i < count; i++) {
		for (j = 0; j < count; j++) {
			printf("%10d\t", a[i][j]);
		}
		printf("\n");
	}
}

void printArray(int count, int a[]) {
	int i;
	
	for (i = 0; i < count; i++) {
		printf("%10d\t", a[i]);
	}
}

void findDiagonalElements(int count, int a[][count], int elements[]) {
	int i;

	for (i = 0; i < count; i++) {
		elements[i] = a[i][i];
	}
}

int elementsSum(int count, int a[]) {
	int i, sum = 0;
	
	for (i = 0; i < count; i++) {
		sum += a[i];
	}
	
	return sum;
}
