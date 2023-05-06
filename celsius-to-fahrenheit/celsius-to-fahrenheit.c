#include <stdio.h>

int main() {
	float celsius;
	float fahrenheit;
	
	printf("Enter temperature in Celsius: ");
	scanf("%f", &celsius);
	
	fahrenheit = (9.0 / 5.0) * celsius + 32;
	printf("\n%.2f Celsius equals to %.2f Fahrenheit.\n", celsius, fahrenheit);
	
	return 0;
}

