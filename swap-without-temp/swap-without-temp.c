#include <stdio.h>

void swap_numbers(int *a, int *b);

int main(void) {
	int a, b;
	
	printf("Enter two integers:");
	scanf("%d%d", &a, &b);
	printf("\nYou entered.\nA: %d;\tB: %d\n", a, b);
	
	swap_numbers(&a, &b);
	printf("\nAfter swapping.\nA: %d;\tB: %d\n", a, b);
	
	return 0;
}

void swap_numbers(int *a, int *b) {
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
