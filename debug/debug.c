#include <stdio.h>

float cal_avg(int b[]) {
	int i, sum = 0;
	float avg;
	for (i = 0; i<5; i++) {
		sum = sum + b[i];
	}
	avg = sum / 5.0;
	return avg;
}

int main(void) {
	int a[5], i;
	float avg;
	printf("Enter 5 numbers:");
	for (i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
	}
	printf("\n Array elements accepted from user.");
	avg = cal_avg(a);
	printf("\nAverage=%f", avg);
	return 0;
}
