#include <stdio.h>

void printMultiplicationTable(int n);

void main(void) {
	int n;
	
	printf("Enter an integer from 1 to 9: ");
	scanf("%d", &n);
	
	printMultiplicationTable(n);
}

void printMultiplicationTable(int n) {
	int i, j;
	
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= 10; j++) {
			printf("%2d\t", i * j);
		}
		printf("\n");
	}
}
