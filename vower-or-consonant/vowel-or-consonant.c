#include <stdio.h>

int main() {
	char c;
	
	printf("Enter one character: ");
	scanf("%c", &c);
	
	switch (c) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("\nThe character is a vowel.\n");
			break;
		default:
			printf("\nThe character is a consonant.\n");
	}
	
	return 0;
}
