#include <stdio.h>

int addTwoNumbers(int num1, int num2);

void main(void) {
	int num1, num2, sum;
	
	printf("Enter 2 numbers: ");
	scanf("%d%d", &num1, &num2);
	
	sum = addTwoNumbers(num1, num2);
	printf("The sum of %d and %d is %d\n", num1, num2, sum);
}

int addTwoNumbers(int num1, int num2) {
	return num1 + num2;
}
