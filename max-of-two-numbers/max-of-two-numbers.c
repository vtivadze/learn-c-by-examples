#include <stdio.h>

int main() {
	int a;
	int b;
	int max;
	
	printf("Enter number A: ");
	scanf("%d", &a);
	
	printf("Enter number B: ");
	scanf("%d", &b);
	
	max = a > b ? a : b;
	printf("\nThe maximum number is: %d\n", max);
	
	return 0;
}
