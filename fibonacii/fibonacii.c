#include <stdio.h>

int acceptNumber(void);
long long unsigned printFib(int n);

void main(void) {
	int n;
	long long unsigned fib;
	
	n = acceptNumber();
	fib = printFib(n);
}

int acceptNumber() {
	int n;
	char c;
	
	printf("Enter a number: ");
	while (!scanf("%d", &n)) {
		printf("Is not a number. Try again: ");
		while ((c = getchar()) != '\n');
	}
	
	return n;
}

long long unsigned printFib(int n) {
	long long unsigned first = 0, second = 1, next;
	int i;
	
	printf("\nFibonacii series up to %d terms:\n", n);
	printf("%3d: %30d\n%3d: %30d\n", 1, first, 2, second);
	
	for (i = 2; i < n; i++) {
		next = first + second;
		printf("%3d: %30llu\n", i + 1, next);

		first = second;
		second = next;
	}
}
