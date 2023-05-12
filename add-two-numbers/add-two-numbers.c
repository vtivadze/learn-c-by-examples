#include <stdio.h>

void main(void) {
	int num1, num2, sum;
	
	printf("Enter the first operand: ");
	scanf("%d", &num1);
	
	printf("Enter the second operand: ");
	scanf("%d", &num2);
	
	sum = num1 + num2;
	printf("The sum of %d and %d is %d\n", num1, num2, sum);
}
