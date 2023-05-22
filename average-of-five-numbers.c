#include <stdio.h>

void getIntegers(int a[], int total);
float getAvg(int a[], int total);

int main(void) {
	int i, total = 5, a[5];
	float avg;
	
	getIntegers(a, total);
	avg = getAvg(a, total);
	
	printf("Average of %d numbers: %.2f", total, avg);
	
	return 0;
}

void getIntegers(int a[], int total) {
	int i;
	
	printf("Enter %d numbers:\n", total);
	for (i = 0; i < total; i++) {
		scanf("%d", &a[i]);
	}
}

float getAvg(int a[], int total) {
	int i, sum = 0;
	float avg;
	
	for (i = 0; i < total; i++) {
		sum += a[i];
	}
	
	avg = (float) sum / total;
	
	return avg;
}
