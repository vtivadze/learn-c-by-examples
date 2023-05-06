#include <stdio.h>

int main() {
	int num1, num2;
	float average;
	
	printf("Please enter the first number: ");
	scanf("%d", &num1);

	printf("Please enter the second number: ");
	scanf("%d", &num2);

	average = (num1 + num2) / 2.0;
	printf("\nAverage of %d and %d is %.2f\n", num1, num2, average);
	
	return 0;
}
