#include <stdio.h>

float calcCircleArea(float radius);

int main(void) {
	float radius;
	float area;
	
	printf("Enter a circle radius: ");
	scanf("%f", &radius);
	
	area = calcCircleArea(radius);
	printf("Circle area is %f\n", area);
	
	return 0;
}

float calcCircleArea(float radius) {
	return 3.14 * radius * radius;
}
