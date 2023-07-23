#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool check_is_strong(int num);
int sum_digit_factorials(int num);
int factorial(int num);

int main(void) {
	int num;

	printf("Enter a number:");
	scanf("%d", &num);
	
	if (check_is_strong(num)) {
		printf("%d is a strong number.\n", num);
	} else {
		printf("%d is not a strong number.\n", num);
	}
	
	return 0;
}

bool check_is_strong(int num) {
	return num == sum_digit_factorials(num);
}

int sum_digit_factorials(int num) {
	if (num < 10) {
		return factorial(num);
	}
	return factorial(num % 10) + sum_digit_factorials(num / 10);
}

int factorial(int num) {
	if (num <= 1) {
		return 1;
	}
	return num * factorial(num - 1);
}

