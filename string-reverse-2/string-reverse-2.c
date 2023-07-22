#include <stdio.h>
#include <stdlib.h>

void accept_user_string(char s[]);
char *reverse_string(char s[]);
int get_string_length(char *s);

int main(void) {
	char s[100];
	
	printf("Enter a string:");
	accept_user_string(s);
	
	char *r = reverse_string(s);
	printf("Reversed string:%s\n", r);
	
	return 0;
}

void accept_user_string(char s[]) {
	gets(s);
}

char *reverse_string(char *s) {
	static int i = 0;
	static char r[100];
	
	if (s[i] != '\0') {
		reverse_string(s + 1);
		r[i++] = *s;
	}
	return r;
}

int get_string_length(char *s) {
	if (*s == '\0') {
		return 0;
	}
	return 1 + get_string_length(++s);
}
