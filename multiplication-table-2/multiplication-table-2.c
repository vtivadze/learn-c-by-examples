#include <stdio.h>

int acceptUserNumber(void);
void printMultiplicationTable(int n);

void main(void) {
	int n;
	
	n = acceptUserNumber();
	printMultiplicationTable(n);
}

int acceptUserNumber(void) {
	int n, inputCount;
	char c;
	
	printf("Enter any digit from 1 till 9: ");
	while((inputCount=scanf("%d", &n)) == 0) {
		printf("Wrong input. Try again: ");
		while ((c=getchar()) != '\n');
	}
	
	return n;
}

void printMultiplicationTable(n) {
	int i = 1, j = 1;
	
	printf("\nMultiplication table for number %d:\n", n);
	
	do {
		do {
			printf("%2d\t", i * j);
			j++;
		} while (j <= 10);
		printf("\n");
		j = 1;
		i++;
	} while (i <= n);
}
