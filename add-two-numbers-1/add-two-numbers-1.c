#include <stdio.h>

int num1, num2, sum;

void addTwoNumbers(void);

void main(void) {
	printf("Enter the first operand: ");
	scanf("%d", &num1);
	
	printf("Enter the second operand: ");
	scanf("%d", &num2);
	
	addTwoNumbers();
	printf("The sum of %d and %d is %d\n", num1, num2, sum);
}

void addTwoNumbers(void) {
	sum = num1 + num2;
}
