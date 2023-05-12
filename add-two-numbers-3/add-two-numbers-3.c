#include <stdio.h>

int sum;

void addTwoNumbers(int num1, int num2);

void main(void) {
	int num1, num2;
	
	printf("Enter 2 numbers: ");
	scanf("%d%d", &num1, &num2);
	
	addTwoNumbers(num1, num2);
	printf("The sum of %d and %d is %d\n", num1, num2, sum);
}

void addTwoNumbers(int num1, int num2) {
	sum = num1 + num2;
}
