#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getPositiveInteger(const char *MSG);
void generateArrayElements(int total, int min, int max, int a[]);
int getSmallest(int total, int a[]);

int main(void) {
    const int TOTAL_DEFAULT = 100;

    const char *const GET_MIN_MSG = "Enter array elements min value:\n";
	const char *const GET_MAX_MSG = "Enter array elements max value:\n";
	const char *const INCORRECT_INPUT_MSG = "The min value (%d) has to be less than max value (%d). Try again.\n";

	int smallest, total, min, max, isValid = 0, a[TOTAL_DEFAULT];

	char get_total_message[100];
	sprintf(get_total_message, "Enter array elements total number from %d to %d:\n", 1, TOTAL_DEFAULT);

	total = getPositiveInteger(get_total_message);

	while (!isValid) {
		min = getPositiveInteger(GET_MIN_MSG);
		max = getPositiveInteger(GET_MAX_MSG);

		if (min >= max) {
			printf(INCORRECT_INPUT_MSG, min, max);
		} else {
			isValid = 1;
		}
	}

	generateArrayElements(total, min, max, a);

	smallest = getSmallest(total, a);
	printf("The smallest number: %d.\n", smallest);

	return 0;
}

int getPositiveInteger(const char *MSG) {
    const int MIN_DEFAULT = 1;
    const int MAX_DEFAULT = 100;

	int integer, isValid = 0;
	char c;

	printf(MSG);
	while (!isValid) {
		while ((scanf("%d", &integer) == 0)) {
			while ((c = getchar()) != '\n');
			printf("The input is not an integer. Try again:\n");
		}

		if (integer <= 0) {
			printf("The input is not a positive integer. Try again:\n");
		} else {
			isValid = 1;
		}
	}

	if (integer < MIN_DEFAULT) {
        printf("The input value is less than allowed min value: %d. Try again.\n", MIN_DEFAULT);
        return getPositiveInteger(MSG);
	}

	if (integer > MAX_DEFAULT) {
        printf("The input value is greater than allowed max value: %d. Try again.\n", MAX_DEFAULT);
        return getPositiveInteger(MSG);
	}

	return integer;
}

void generateArrayElements(int total, int min, int max, int a[]) {
	int i;

	srand(time(NULL));
	for (i = 0; i < total; i++) {
		while ((a[i] = rand() % max) < min);
		printf("%d: %d\n", i, a[i]);
	}
}

int getSmallest(int total, int a[]) {
	int i, smallest = a[0];

	for (i = 1; i < total; i++) {
		if (a[i] < smallest) {
			smallest = a[i];
		}
	}

	return smallest;
}

