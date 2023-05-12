#include <stdio.h>

void printOddNumbers(int n);

void main(void) {
	int n;
	
	printf("Enter any integer number: ");
	scanf("%d", &n);
	
	printOddNumbers(n);
}

void printOddNumbers(int n) {
	int curNum = 0;
	
	printf("Odd numbers:\n");
	
	do {
		if (curNum % 2) {
			printf("%d\n", curNum);
		}
		
		curNum++;
	} while (curNum <= n);
}
