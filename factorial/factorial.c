#include <stdio.h>

int acceptUserNumber(void);
long long unsigned calcFactorial(int num);

void main(void) {
	int n;
	long long unsigned factorial;
	
	n = acceptUserNumber();
	factorial = calcFactorial(n);
	
	printf("Factorial of the number %d is %llu.\n", n, factorial);
}

int acceptUserNumber() {
	int n;
	char c;
	
	printf("Enter a number: ");
	while (!scanf("%d", &n)) {
		printf("Is not a number. Try again: ");
		while ((c = getchar()) != '\n');
	}
	
	return n;
}

long long unsigned calcFactorial(int n) {
	long long unsigned factorial = 1;
	long long unsigned i;
	
	for (i = 1; i <= n; i++) {
		factorial *= i;
	}
	
	return factorial;
}
