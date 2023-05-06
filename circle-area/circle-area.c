#include <stdio.h>
#include <math.h>

#define PI 3.14

int main() {
	float radius, area;
	
	printf("Please enter a circle radius: ");
	scanf("%f", &radius);
	
	area = PI * pow(radius, 2);
	printf("\nArea of the circle with radius %.2f is: %.2f\n", radius, area);
	
	return 0;
}
