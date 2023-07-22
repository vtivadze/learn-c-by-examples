#include <stdio.h>
#include <stdlib.h>

char *delete_character(char s[], char c);
int get_string_length(char *s);

int main(void) {
	char s[100], *filtered_string;
	char c;
	
	printf("Enter a string:");
	gets(s);
	
	printf("Enter a character:");
	scanf("%c", &c);
	
	filtered_string = delete_character(s, c);
	printf("Resulting string:%s\n", filtered_string);
	
	free(filtered_string);
	
	return 0;
}

char *delete_character(char s[], char c) {
	int i, j;
	
	int string_length = get_string_length(s);
	char *n = (char *)malloc(string_length * sizeof(char));
	
	for (i = 0, j = 0; s[i] != '\0'; ++i) {
		if (s[i] != c) {
			n[j] = s[i];
			j++;
		}
	}
	n[j] = '\0';
	
	return n;
}

int get_string_length(char *s) {
	if (*s == '\0') {
		return 0;
	}
	return 1 + get_string_length(s + 1);
}
