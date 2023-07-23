#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool check_is_armstrong(int num);
int sum_digits_powered_three(int num);
int cube(int num);

int main(void) {
	int num;
		
	printf("Enter a number:");
	scanf("%d", &num);
	
	if (check_is_armstrong(num)) {
		printf("%d is an Armstrong number.\n", num);
	} else {
		printf("%d is not an Armstrong number.\n", num);
	}
	
	return 0;
}

bool check_is_armstrong(int num) {
	return num == sum_digits_powered_three(num);
}

int sum_digits_powered_three(int num) {
	if (num < 10) {
		return cube(num);
	}
	return cube(num % 10) + sum_digits_powered_three(num / 10);
}

int cube(int num) {
	return num * num * num;
}
