#include <stdio.h>

int acceptUserInteger(void);
void printVariableAndAddress(int *ptr);

int main(void) {
	int a, b;
	int *ptr;
	
	printf("Enter an integer: ");
	a = acceptUserInteger();
	
	ptr = &a;
	printVariableAndAddress(ptr);
	
	printf("\n\nEnter another integer: ");
	b = acceptUserInteger();
	ptr = &b;
	printVariableAndAddress(ptr);
	
	return 0;
}

int acceptUserInteger(void) {
	int integer;
	int count;
	char c;
	
	while((count = scanf("%d", &integer)) == 0) {
		while ((c = getchar()) != '\n');
		printf("This is not an integer. Try again: ");
	}
	
	return integer;
}

void printVariableAndAddress(int *ptr) {
	printf("\nVariable value: %d\nVariable address: %u", *ptr, ptr);
}
