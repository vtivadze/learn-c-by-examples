#include <stdio.h>
#include <string.h>

void delete_character(char s[], char d);

int main(void) {
	char s[100], d;
	
	printf("Enter a string:");
	gets(s);
	
	printf("Enter a character:");
	scanf("%c", &d);
	
	delete_character(s, d);
	printf("Filtered string:%s\n", s);
	
	return 0;
}

void delete_character(char s[], char d) {
	int i, j;
	int len = strlen(s);
	
	for (i = 0; i < len; ++i) {
		if (s[i] == d) {
			for (j = i; j < len - 1; ++j) {
				s[j] = s[j + 1];
			}
			len--;
			i--;
		}
	}
	s[i] = '\0';
}
