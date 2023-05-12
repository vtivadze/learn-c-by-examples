#include <stdio.h>
#include <stdbool.h>

int checkCharCase(char ch);

void main(void) {
	char ch;
	int charCase;
	
	printf("Enter a character: ");
	scanf("%c", &ch);
	
	charCase = checkCharCase(ch);
	
	switch (charCase) {
		case 1:
			printf("The caracter '%c' is of upper case.\n", ch);
			break;
		case -1:
			printf("The caracter '%c' is of lower case.\n", ch);
			break;
		default:
			printf("The caracter '%c' is not an alphabetical character.\n", ch);
	}
}

int checkCharCase(char ch) {
	int result;
	
	if (ch >= 'A' && ch <= 'Z') {
		result = 1;
	} else if (ch >= 'a' && ch <= 'z') {
		result = -1;
	} else {
		result = 0;
	}
	
	return result;
}
