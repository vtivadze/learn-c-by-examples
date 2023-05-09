#include <stdio.h>

int main() {
	int a;
	int b;
	
	printf("Enter number A: ");
	scanf("%d", &a);
	
	printf("Enter number B: ");
	scanf("%d", &b);
	
	if (a > b) {
		printf("\nThe max number is %d.\n", a);
	} else {
		printf("\nThe max number is %d.\n", b);
	}
	
	return 0;
}
