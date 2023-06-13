#include <stdio.h>
#include <string.h>
#include <ctype.h>

void convertToLower(char origin[], char lower[]);

int main(void) {
	int size = 30;
	char origin[size], lower[size];
	
	printf("Enter a string: ");
	scanf("%s", origin);
	origin[strlen(origin)] = '\0';
	
	printf("\nOrigin: |%s|\n", origin);
	printf("Length: %d\n", strlen(origin));
	printf("Size: %d\n", sizeof(origin));
	
	convertToLower(origin, lower);
	
	printf("Lower: |%s|\n", lower);
	printf("Length: %d\n", strlen(lower));
	printf("Size: %d\n", sizeof(lower));
	
	return 0;
}

void convertToLower(char origin[], char lower[]) {
	int i;
	
	printf("\n");
	for (i = 0; origin[i] != '\0'; i++) {
		lower[i] = tolower(origin[i]);
		printf("%d: %c %c\n", i, origin[i], lower[i]);
	}
	lower[i] = '\0';
	printf("\n");
}
