#include <stdio.h>
#include <stdbool.h>

bool isLeap(int year);

void main(void) {
	int year;
	
	printf("Enter a year: ");
	scanf("%d", &year);
	
	printf("%d is %sa leap year.\n", year, isLeap(year) ? "" : "not ");
}

bool isLeap(int year) {
	bool result;
	
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) {
		result = true;
	} else {
		result = false;
	}
	
	return result;
}
