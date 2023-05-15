#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num);

void main(void) {
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	printf("%d is %sa prime number.\n", num, isPrime(num) ? "" : "not ");
}

bool isPrime(int num) {
	bool result = true;
	int i;
	
	for (i = 2; i < sqrt(num); i++) {
		if (num % i == 0) {
			result = false;
			break;
		}
	}
	
	return result;
}
