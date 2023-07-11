#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, sum = 0;
	float avr;
	
	for (i = 1; i < argc; ++i) {
		printf("arg %d: %s\n", i, argv[i]);
		sum += atoi(argv[i]);
	}
	
	avr = (float)sum/(argc - 1);
	printf("\nAverage: %.2f\n", avr);
	
	return 0;
}
