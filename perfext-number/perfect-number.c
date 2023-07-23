#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define DIVS_COUNT 100

bool check_is_perfect(int num);
void define_dividers(int num, int divs[]);
int sum_dividers(int a[]);

int main(void) {
	int num;
	
	printf("Enter a number:");
	scanf("%d", &num);
	
	if (check_is_perfect(num)) {
		printf("%d is a perfect number.\n", num);
	} else {
		printf("%d is not a perfect number.\n", num);
	}
	
	return 0;
}

bool check_is_perfect(int num) {
	int divs[DIVS_COUNT] = {0};
	define_dividers(num, divs);

	int sum_divs = sum_dividers(divs);
	
	return sum_divs == num;
}

void define_dividers(int num, int divs[]) {
	int i, j;
	
	for (i = 1, j = 0; i <= num / 2; ++i) {
		if (num % i == 0) {
			divs[j++] = i;
		}
	}
}

int sum_dividers(int a[]) {
	int sum = 0;
	while (*a != 0) {
		sum += *a++;
	}
	return sum;
}

