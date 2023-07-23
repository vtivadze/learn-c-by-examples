#include <stdio.h>

int calc_sum_of_digits(int num);

int main(void) {
	int num, sumofdig;
	
	printf("Enter a number:");
	scanf("%d", &num);
	
	sumofdig = calc_sum_of_digits(num);
	printf("Sum of digits:%d\n", sumofdig);
	
	return 0;
}

int calc_sum_of_digits(int num) {
	if (num == 0) {
		return 0;
	}
	return num % 10 + calc_sum_of_digits(num / 10);
}
