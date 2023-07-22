#include <stdio.h>

void accept_user_string(char s[]);
void copy_string(char o[], char c[]);

int main(void) {
	char origin_string[100] = {'\0'};
	char copied_string[100] = {'\0'};
	
	printf("Enter string to copy: ");
	accept_user_string(origin_string);
	
	copy_string(origin_string, copied_string);
	printf("Copied string: %s\n", copied_string);
	
	return 0;
}

void accept_user_string(char s[]) {
	gets(s);
}

void copy_string(char o[], char c[]) {
	while (*o != '\0') {
		*c = *o;
		++o;
		++c;
	}
	*c = '\0';
}
