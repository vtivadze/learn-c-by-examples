#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void populateIntArray(int a[], int count);
void replaceSmallest(int a[], int count, int replacementValue);
void printArray(int a[], int count);

int main(void) {
	const int COUNT = 10;
	int a[COUNT], smallestPosition, replacementValue = -1;

	populateIntArray(a, COUNT);
	printArray(a, COUNT);
	
	replaceSmallest(a, COUNT, replacementValue);
	printArray(a, COUNT);
	
	return 0;
}

void populateIntArray(int a[], int count) {
	int random, i = 0;

	srand(time(NULL));
	while (i < count) {
		a[i] = rand();
		i++;
	}
}

void replaceSmallest(int a[], int count, int replacementValue) {
	int i, smallestPosition = 0;
	
	for (i = 1; i < count; i++) {
		if (a[smallestPosition] > a[i]) {
			smallestPosition = i;
		}
	}
	
	a[smallestPosition] = replacementValue;
}

void printArray(int a[], int count) {
	int i;
	
	printf("\nArray elements:\n");
	for (i = 0; i < count; i++) {
		printf("%d: %d\n", i, a[i]);
	}
}
