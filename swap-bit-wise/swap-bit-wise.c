#include <stdio.h>

void swap(int *a, int *b);

int main(void) {
	int a, b;
	
	printf("Enter two digits:");
	scanf("%d%d", &a, &b);
	printf("\nYou entered.\nA: %d\tB: %d", a, b);
	
	swap(&a, &b);
	printf("\nAfter swapping.\nA: %d\tB: %d\n", a, b);
	
	return 0;
}

void swap(int *a, int *b) {
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
