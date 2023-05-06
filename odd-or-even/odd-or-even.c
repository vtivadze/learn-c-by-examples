#include <stdio.h>

int main() {
	int number;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	printf("\nThe number is %s.\n", number % 2 ? "odd" : "even");
	
	return 0;
}
