#include <stdio.h>

void printArrayElement(int);

int main(void) {
	int a[5] = {1, 2, 3, 4, 5};
	printArrayElement(a[3]);
	return 0;
}

void printArrayElement(int element) {
	printf("%d\n", element);
}
