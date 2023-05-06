#include <stdio.h>

int main() {
	int a;
	int b;
	
	printf("Enter number A: ");
	scanf("%d", &a);
	
	printf("Enter number B: ");
	scanf("%d", &b);
	
	if (a > b) {
		printf("\nThe number A is greater than the number B.\n");
	} else if (a < b) {
		printf("\nThe number A is less than the number B.\n");
	} else {
		printf("\nThe number A is equal to the number B.\n");
	}
	
	return 0;
}
