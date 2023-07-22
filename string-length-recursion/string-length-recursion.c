#include <stdio.h>

void accept_user_string(char s[]);
int get_string_length(const char *s);

int main(void) {
	char s[100] = {'\0'};
	int string_length;
	
	printf("Enter a string:");
	accept_user_string(s);
	
	string_length = get_string_length(s);
	printf("String length: %i\n", string_length);
	
	return 0;
}

void accept_user_string(char s[]) {
	gets(s);
}

int get_string_length(const char *s) {
	if (*s == '\0') {
		return 0;
	}
	return 1 + get_string_length(++s);
}

