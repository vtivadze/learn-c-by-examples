#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void acceptUserString(char *s, int size);
int getCharCount(char *s);
int getSpaceCount(char *s);
int getVowelCount(char *s);
bool isVowel(char c);
bool isAlphabet(char c);
int getConsonantCount(char *s);
int getWordCount(char *s);
int getUpperCount(char *s);
int getLowerCount(char *s);

int main(void) {
	int size = 100;
	char s[size];
	int charCount, vowelCount, consonantCount, spaceCount, wordCount, upperCount, lowerCount;
	
	acceptUserString(s, size);
	printf("String: %s\n", s);
	
	charCount = getCharCount(s);
	printf("\nCharacter count: %d\n", charCount);
	
	vowelCount = getVowelCount(s);
	printf("Vowel count: %d\n", vowelCount);
	
	consonantCount = getConsonantCount(s);
	printf("Consonant count: %d\n", consonantCount);
	
	spaceCount = getSpaceCount(s);
	printf("Space count: %d\n", spaceCount);
	
	wordCount = getWordCount(s);
	printf("Word count: %d\n", wordCount);
	
	upperCount = getUpperCount(s);
	printf("Upper count: %d\n", upperCount);
	
	lowerCount = getLowerCount(s);
	printf("Lower count: %d\n", lowerCount);
	
	return 0;
}

void acceptUserString(char *s, int size) {
	printf("Enter a string: ");
	gets(s);
	
	if (strlen(s) > size - 1) {
		s[size] = '\0';
	}
}

int getCharCount(char *s) {
	return strlen(s);
}

int getVowelCount(char *s) {
	int result = 0;
	char c;
	
	while ((c = *s) != '\0') {
		if (isVowel(c)) {
			result++;
		}
		s++;
	}
	
	return result;
}

int getConsonantCount(char *s) {
	int result = 0;
	char c;
	
	while ((c = *s) != '\0') {
		if (isAlphabet(c) && !isVowel(*s)) {
			result++;
		}
		s++;
	}
	
	return result;
}

int getSpaceCount(char *s) {
	int result = 0;
	char c;
	
	while ((c = *s) != '\0') {
		if (c == ' ') {
			result++;
		}
		s++;
	}
	
	return result;
}

int getWordCount(char *s) {
	return getSpaceCount(s) + 1;
}

int getUpperCount(char *s) {
	int result = 0;
	char c;
	
	while ((c = *s) != '\0') {
		if (c >= 'A' && c <= 'Z') {
			result++;
		}
		s++;
	}
	
	return result;
}

int getLowerCount(char *s) {
	int result = 0;
	char c;
	
	while ((c = *s) != '\0') {
		if (c >= 'a' && c <= 'z') {
			result++;
		}
		s++;
	}
	
	return result;
}

bool isVowel(char c) {
	char vowels[5] = {'A', 'E', 'I', 'O', 'U'};
	int diff = 32;
	int i;
	bool result = false;
	
	for (i = 0; i < 5; i++) {
		if (c == vowels[i] || c == vowels[i] + diff) {
			result = true;
			break;
		}
	}
	
	return result;
}

bool isAlphabet(char c) {
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
		return true;
	}
	return false;
}
