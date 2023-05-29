#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void populateArray(int a[], int count);
void printArray(int a[], int count);
int findLargest(int a[], int count);

int main(void) {
	const int COUNT = 10;
	int a[COUNT], largest;
	
	populateArray(a, COUNT);
	printf("\nArray elements:\n");
	printArray(a, COUNT);
	
	largest = findLargest(a, COUNT);
	printf("\nLargest element: %d\n", largest);
	
	return 0;
}

void populateArray(int a[], int count) {
	int i;
	
	srand(time(NULL));
	for (i = 0; i < count; i++) {
		a[i] = rand();
	}
}

void printArray(int a[], int count) {
	int i;

	for (i = 0; i < count; i++) {
		printf("%d: %d\n", i, a[i]);
	}
}

int findLargest(int a[], int count) {
	int i, largest = a[0];
	
	for (i = 0; i < count; i++) {
		if (largest < a[i]) {
			largest = a[i];
		}
	}
	
	return largest;
}
