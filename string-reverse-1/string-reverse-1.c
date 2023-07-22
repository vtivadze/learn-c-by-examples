#include <stdio.h>
#include <stdlib.h>

void accept_user_string(char s[]);
char *reverse_string(char s[]);
int get_string_length(char *s);

int main(void) {
	char s[100], *r;
	
	printf("Enter a string: ");
	accept_user_string(s);
	
	r = reverse_string(s);
	printf("Reversed string: %s\n", r);
	
	free(r);
	
	return 0;
}

void accept_user_string(char s[]) {
	gets(s);
}

char *reverse_string(char s[]) {
	int i;
	int string_length = get_string_length(s);
	
	char *r = (char *)malloc(string_length * sizeof(char));
	
	for (i = 0; i < string_length; ++i) {
		r[i] = s[string_length - 1 -i];
	}
	r[i] = '\0';
	
	return r;
}

int get_string_length(char *s) {
	if (*s == '\0') {
		return 0;
	}
	return 1 + get_string_length(++s);
}
