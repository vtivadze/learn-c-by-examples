#include <stdio.h>

void printMultiplicationTable(int n);
int acceptUserNumber();

void main(void) {
	int n;
	
	n = acceptUserNumber();
	printMultiplicationTable(n);
}

int acceptUserNumber() {
	int n;
	char c;
	
	printf("Enter an integer from 1 to 9: ");
	while (!scanf("%d", &n)) {
		printf("Is not a number. Try again: ");
		while ((c = getchar()) != '\n');
	}
	
	return n;
}

void printMultiplicationTable(int n) {
	int i = 1, j = 1;
	
	printf("\nThe multiplication table for a number %d:\n\n", n);
	
	while (i <= n) {
		while (j <= 10) {
			printf("%2d\t", i * j);
			j++;
		}
		i++;
		j = 1;
		printf("\n");
	}
}
