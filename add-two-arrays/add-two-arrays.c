#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int acceptUserInteger();
void populate2dArray(int r, int c, int a[][c]);
void print2dArray(int r, int c, int a[][c]);
void sumTwoArrays(int r, int c, int a1[][c], int a2[][c], int sum[][c]);

int main(void) {
	int r, c;
	
	printf("Enter array rows count: ");
	r = acceptUserInteger();
	
	printf("Enter array columns count: ");
	c = acceptUserInteger();
	
	int a1[r][c], a2[r][c], sum[r][c];
	
	srand(time(NULL));
	
	populate2dArray(r, c, a1);
	printf("\nThe first array elements:\n");
	print2dArray(r, c, a1);
	
	populate2dArray(r, c, a2);
	printf("\nThe second array elements:\n");
	print2dArray(r, c, a2);
	
	sumTwoArrays(r, c, a1, a2, sum);
	printf("\nSummed array elements:\n");
	print2dArray(r, c, sum);
	
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
	int i, j;

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			a[i][j] = rand();
		}
	}
}

void print2dArray(int r, int c, int a[][c]) {
	int i, j;
	
	for (i = 0; i < r; i++) {
		for (j = 0; j < r; j++) {
			printf("%10d\t", a[i][j]);
		}
		printf("\n");
	}
}

void sumTwoArrays(int r, int c, int a1[][c], int a2[][c], int sum[][c]) {
	int i, j;
	
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			sum[i][j] = a1[i][j] + a2[i][j];
		}
	}
}
