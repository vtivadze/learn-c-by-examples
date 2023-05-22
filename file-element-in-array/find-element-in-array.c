#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

void generateRandomIntegers(int a[], int total, int max);
int acceptInteger(int min, int max);
int getPosition(int num, int a[], int total);

int main(void) {
	int i, num, total = 100, min = 1, max = 100, a[total], position;
	
	generateRandomIntegers(a, total, max);
	num = acceptInteger(min, max);
	position = getPosition(num, a, total);
	
	if (position >= 0) {
		printf("The number %d found at position %d.\n", num, position);
	} else {
		printf("The numbe %d is not found.\n", num);
	}
	
	return 0;
}

void generateRandomIntegers(int a[], int total, int max) {
	int i, random;
	
	srand(time(NULL));
	for (i = 0; i < total; i++) {
		while ((random = rand()) > max);
		a[i] = random;
	}
}

int acceptInteger(int min, int max) {
	int num = 0;
	char c;
	bool isValid = false;

	const char *ENTER_INTEGER_MESSAGE = "Enter intger from %d to %d:\n";
	const char *NOT_INTEGER_ERROR_MESSAGE = "Input is not an integer. Try again:\n";
	const char *OUT_OF_RANGE_ERROR_MESSAGE = "The number is out of range. Try again:\n";

	printf(ENTER_INTEGER_MESSAGE, min, max);

	while (isValid == false) {
		while ((scanf("%d", &num)) == 0) {
			while ((c = getchar()) != '\n');
			printf(NOT_INTEGER_ERROR_MESSAGE);
		}

		if (num < min || num > max) {
			printf(OUT_OF_RANGE_ERROR_MESSAGE);
		} else {
			isValid = true;
		}
	}

	return num;
}

int getPosition(int num, int a[], int total) {
	int i, position = -1;
	
	for (i = 0; i < total; i++) {
		if (num == a[i]) {
			position = i;
			break;
		}
	}
	
	return position;
}
