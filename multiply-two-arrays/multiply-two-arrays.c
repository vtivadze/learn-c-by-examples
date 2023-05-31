#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int acceptUserInteger();
void populate2dArray(int r, int c, int a[][c]);
void print2dArray(int r, int c, int a[][c]);
void productTwoArrays(int r1, int c1, int a1[][c1], int r2, int c2, int a2[][c2], int productedArray[][c2], int *error);
int calcElem(int a1r, int a2c, int c1, int c2, int a1[][c1], int a2[][c2]);

int main(void) {
	int r1, c1, r2, c2;
	
	printf("Enter the first array rows count: ");
	r1 = acceptUserInteger();
	
	printf("\nEnter the first array columns count: ");
	c1 = acceptUserInteger();

	printf("\nEnter the second array rows count: ");
	r2 = acceptUserInteger();
	
	printf("\nEnter the second array columns count: ");
	c2 = acceptUserInteger();
	
	int a1[r1][c1], a2[r2][c2], productedArray[r1][c2], error = 0;
	
	srand(time(NULL));
	
	populate2dArray(r1, c1, a1);
	printf("\nThe first array elements:\n");
	print2dArray(r1, c1, a1);

	populate2dArray(r2, c2, a2);
	printf("\nThe first array elements:\n");
	print2dArray(r2, c2, a2);
	
	productTwoArrays(r1, c1, a1, r2, c2, a2, productedArray, &error);
	if (error) {
		printf("\nImpossible to product these arrays.\n");
	} else {
		printf("\nResulted array elements:\n");
		print2dArray(r1, c2, productedArray);	
	}
	
	return 0;
}

int acceptUserInteger() {
	int integer, count;
	char c;
	
	while ((count = scanf("%d", &integer)) == 0) {
		while ((c = getchar()) != '\n');
		printf("This is not an integer. Try again: ");
	}
	
	return integer;
}

void populate2dArray(int r, int c, int a[][c]) {
	int i, j, random;
	const int MAX = 5;
	
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			a[i][j] = rand() % MAX;
		}
	}
}

void print2dArray(int r, int c, int a[][c]) {
	int i, j;
	
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%10d\t", a[i][j]);
		}
		printf("\n");
	}
}

void productTwoArrays(int r1, int c1, int a1[][c1], int r2, int c2, int a2[][c2], int productedArray[][c2], int *error) {
	int i, j;
	
	if (c1 != r2) {
		*error = 1;
		return;
	}
	
	for (i = 0; i < r1; i++) {
		for (j = 0; j < c2; j++) {
			productedArray[i][j] = calcElem(i, j, c1, c2, a1, a2);
		}
	}
}

int calcElem(int a1r, int a2c, int c1, int c2, int a1[][c1], int a2[][c2]) {
	int i, elem = 0;
	
	for (i = 0; i < c1; i++) {
		elem += a1[a1r][i] * a2[i][a2c];
	}
	
	return elem;
}
