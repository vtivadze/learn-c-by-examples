#include <stdio.h>

void accept_user_string(char s[]);
int get_char_count(const char *s);

int main(void) {
	char s[100] = {'\0'};
	int string_length;
	
	printf("Enter a string:");
	accept_user_string(s);
	
	string_length = get_char_count(s);
	
	printf("Character count: %i\n", string_length);
	
	return 0;
}

void accept_user_string(char s[]) {
	gets(s);
}

int get_char_count(const char *s) {
	int string_length = 0;
	
	while (*s != '\0') {
		string_length = string_length + 1;
		++s;
	}
	
	return string_length;
}

