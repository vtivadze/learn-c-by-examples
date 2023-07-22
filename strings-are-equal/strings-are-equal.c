#include <stdio.h>
#include <stdbool.h>

void accept_user_string(char s[]);
bool compare_strings(char s1[], char s2[]);
bool check_strings_same_length(char s1[], char s2[]);
bool check_strings_same_character(char s1[], char s2[]);
int get_string_length(char *s);

int main(void) {
	char s1[100] = {'\0'}, s2[100] = {'\0'};
	
	printf("Enter the first string: ");
	accept_user_string(s1);

	printf("Enter the second string: ");
	accept_user_string(s2);
	
	bool is_equal = compare_strings(s1, s2);
	
	if (is_equal) {
		printf("\nStrings are equal!\n");
	} else {
		printf("\nStrings are not equal!\n");
	}
	
	return 0;
}

void accept_user_string(char s[]) {
	gets(s);
}

bool compare_strings(char s1[], char s2[]) {
	bool is_same_length = check_strings_same_length(s1, s2);
	
	if (! is_same_length) {
		return false;
	}
	
	bool is_same_character = check_strings_same_character(s1, s2);
	
	if (! is_same_character) {
		return false;
	}
	
	return true;
}

bool check_strings_same_length(char s1[], char s2[]) {
	int l1, l2;
	
	l1 = get_string_length(s1);
	l2 = get_string_length(s2);
	
	return l1 == l2;
}

bool check_strings_same_character(char s1[], char s2[]) {
	int i = 0;
	
	while (s1[i] != '\0' || s2[i] != '\0') {
		if (s1[i] != s2[i]) {
			return false;
		}
		i++;
	}
	return true;
}

int get_string_length(char *s) {
	if (s[0] == '\0') {
		return 0;
	}
	return 1 + get_string_length(&s[1]);
}
