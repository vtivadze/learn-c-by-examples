#include <stdio.h>
#include <string.h>

void compareTwoStrings(char s1[], char s2[]);

int main(void) {
	int stringSize = 30;
	char s1[stringSize], s2[stringSize], s3[stringSize];
	short int cmpRes;
	
	printf("Enter a string: ");
	scanf("%s", s1);
	printf("You entered: %s\n", s1);
	printf("Length: %d\n", strlen(s1));
	printf("Size: %d\n\n", sizeof(s1));
	
	strcpy(s2, s1);
	printf("Coppied string: %s\n", s2);
	printf("Length: %d\n", strlen(s2));
	printf("Size: %d\n\n", sizeof(s2));
	
	strcat(s2, s1);
	printf("Concatenated string: %s\n", s2);
	printf("Length: %d\n", strlen(s2));
	printf("Size: %d\n\n", sizeof(s2));
	
	printf("\nEnter another string: ");
	scanf("%s", s3);
	printf("Length: %d\n", strlen(s3));
	printf("Size: %d\n\n", sizeof(s3));
	
	compareTwoStrings(s1, s3);
	compareTwoStrings(s3, s1);
	
	compareTwoStrings(s2, s3);
	compareTwoStrings(s3, s2);
	
	compareTwoStrings(s1, s2);
	compareTwoStrings(s2, s1);
	
	return 0;
}

void compareTwoStrings(char s1[], char s2[]) {
	int cmpRes;
	
	cmpRes = strcmp(s1, s2);
	
	if (cmpRes < 0) {
		printf("|%s| < |%s|\n\n", s1, s2);
	} else if(cmpRes > 0) {
		printf("|%s| > |%s|\n\n", s1, s2);
	} else if (cmpRes == 0) {
		printf("|%s| == |%s|\n\n", s1, s2);
	}
}

