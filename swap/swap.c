#include <stdio.h>

int acceptNumber(void);
void swap(int *a, int *b);

void main(void) {
	int a, b;
	
	a = acceptNumber();
	b = acceptNumber();
	
	printf("\nYou entered:\na = %d\nb = %d\n", a, b);
	swap(&a, &b);
	printf("\nAfter swapping:\na = %d\nb = %d\n", a, b);
}

int acceptNumber(void) {
	int n;
	char c;
	
	printf("Enter a number: ");
	while(!scanf("%d", &n)) {
		printf("This is not a number. Try again: ");
		while((c = getchar()) != '\n');
	}
	
	return n;
}

void swap(int *a, int *b) {
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
