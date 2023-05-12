#include <stdio.h>

void printOddNumbers(int n);

void main(void) {
	int n;
	
	printf("Enter any integer number: ");
	scanf("%d", &n);
	
	printOddNumbers(n);
}

void printOddNumbers(int n) {
	int i;
	
	printf("Odd numbers:\n");
	
	for (i = 1; i <=n; i++) {
		if (i % 2) {
			printf("%d\n", i);
		}
	}
}
