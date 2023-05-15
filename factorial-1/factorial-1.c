#include <stdio.h>

int acceptNumber(void);
long long unsigned calcFact(int n);

void main(void) {
	int n;
	long long unsigned fact;
	
	n = acceptNumber();
	fact = calcFact(n);
	
	printf("Factorial of given number: %llu.\n", fact);
}

int acceptNumber() {
	int n;
	char c;
	
	printf("Enter a number: ");
	while(!scanf("%d", &n)) {
		printf("Is not a number. Try again: ");
		while((c = getchar()) != '\n');
	}
	
	return n;
}

long long unsigned calcFact(int n) {
	long long unsigned result;
	
	if (n == 1) {
		result = 1;
	} else {
		result = (long long unsigned)n * calcFact(n - 1);
	}
	
	return result;
}
