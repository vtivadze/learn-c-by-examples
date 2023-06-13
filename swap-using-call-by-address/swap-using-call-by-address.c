#include <stdio.h>

int acceptUserInteger(void);
void swap(int *a, int *b);

int main(void) {
	int a, b;
	
	printf("Enter the first integer: ");
	a = acceptUserInteger();
	
	printf("Enter the second integer: ");
	b = acceptUserInteger();
	
	printf("\nOrigin values: %d - %d\n", a, b);
	swap(&a, &b);
	printf("After swapping: %d - %d\n", a, b);
	
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

void swap(int *a, int *b) {
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
