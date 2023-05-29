#include <stdio.h>

int acceptNumber(void);
long long unsigned fib(int n);

void main(void) {
	int n, i;
	
	n = acceptNumber();
	
	printf("\nFibonacii series up to %d number:\n", n);
	for (i = 0; i < n; i++) {
		printf("%3d: %30llu\n", i + 1, fib(i));
	}
}

int acceptNumber(void) {
	int n;
	char c;
	
	printf("Enter a number: ");
	while (!scanf("%d", &n)) {
		printf("This is not a number. Try again: ");
		while ((c = getchar()) != '\n');
	}
	
	return n;
}

long long unsigned fib(int n) {
	static long long unsigned series[100] = {0, 1};
	long long unsigned next;
	int i;
	
	if (n <= 1) {
		next = series[n];
	} else {
		if (series[n] != 0) {
			next = series[n];
		} else {
			next = series[n - 1] + series[n -2];
			series[n] = next;
		}
	}
	
	return next;
}
