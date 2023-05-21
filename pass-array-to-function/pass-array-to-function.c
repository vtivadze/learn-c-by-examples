#include <stdio.h>

void printAverage(int[]);

int main(void) {
	int a[5] = {1, 2, 3, 4, 5};
	printAverage(a);
	return 0;
}

void printAverage(int a[]) {
	int i, sum = 0;
	float average;
	
	for (i = 0; i < 5; i++) {
		sum += a[i];
	}
	
	average = sum / 5.0;
	
	printf("Average: %.2f\n", average);
}
