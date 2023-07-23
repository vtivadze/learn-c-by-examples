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
	int sum = 0;
	
	while (num != 0) {
		sum += num % 10;
		num /= 10;
	}
	
	return sum;
}
