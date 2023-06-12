#include <stdio.h>

int acceptUserInteger(void);

int main(void) {
	int a, b, sum;
	int *pa, *pb;
	
	printf("Enter the first operand: ");
	a = acceptUserInteger();
	pa = &a;
	
	printf("Enter the second operand: ");
	b = acceptUserInteger();
	pb = &b;
	
	sum = *pa + *pb;
	printf("\n\nSum: %d\n", sum);
	
	return 0;
}

int acceptUserInteger(void) {
	int num;
	int count;
	char c;
	
	while ((count = scanf("%d", &num)) == 0) {
		while ((c = getchar()) != '\n');
		printf("This is not an integer. Try again: ");
	}
	
	return num;
}
