#include <stdio.h>
#include <string.h>

void transformToLowerCase(char *s);

int main(void) {
	int size = 30;
	char s[size];
	
	printf("Enter a string: ");
	gets(s);
	
	printf("\nOrigin: %s\n", s);
	transformToLowerCase(s);
	printf("Lower: %s\n", s);
	
	return 0;
}

void transformToLowerCase(char *s) {
	int i;
	int diff = 32;
	char c;
	
	while ((c = *s) != '\0') {
		if (c >= 'A' && c < 'Z') {
			*s = c + diff;
		}
		s++;
	}
}
