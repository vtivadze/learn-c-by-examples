#include <stdio.h>

void printOddNumbers(int n);

void main(void) {
	int n;
	
	printf("Enter any integer number: ");
	scanf("%d", &n);
	
	printOddNumbers(n);
}

void printOddNumbers(int n) {
	int curNumber = 0;
	
	printf("Odd numbers:\n");
	
	while (curNumber <= n) {
		if (curNumber % 2) {
			printf("%d\n", curNumber);
		}
		
		curNumber++;
	}
}
