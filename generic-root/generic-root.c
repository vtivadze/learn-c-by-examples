#include <stdio.h>

int call_generic_root(int num);
int sum_of_digits(int num);

int main(void) {
	int num, generic_root;
	
	printf("Enter a number:");
	scanf("%d", &num);
	
	generic_root = call_generic_root(num);
	printf("Generic root:%d\n", generic_root);
	
	return 0;
}

int call_generic_root(int num) {
	while ((num = sum_of_digits(num)) >= 10);
	return num;
}

int sum_of_digits(int num) {
	if (num == 0) {
		return 0;
	}
	return num % 10 + sum_of_digits(num / 10);
}
