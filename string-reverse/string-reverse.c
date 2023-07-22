#include <stdio.h>
#include <stdlib.h>

#define STRING_SIZE 100

void accept_user_string(char s[]);
void reverse_string(char s[]);
int get_string_length(char *s);

int main(void) {
	char s[100];
	
	printf("Enter a string: ");
	accept_user_string(s);
	
	reverse_string(s);
	printf("Reversed string: %s\n", s);
	
	return 0;
}

void accept_user_string(char s[]) {
	gets(s);
}

void reverse_string(char s[]) {
	int i;
	int string_length = get_string_length(s);
	char tmp;
	
	for (i = 0; i < string_length / 2; ++i) {
		tmp = s[i];
		s[i] = s[string_length - 1 - i];
		s[string_length - 1 - i] = tmp;
	}
	
}

int get_string_length(char *s) {
	if (*s == '\0') {
		return 0;
	}
	return 1 + get_string_length(++s);
}



