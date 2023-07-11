#include <stdio.h>
#include <string.h>

void acceptFileName(char fileName[]);
void accpetContent(char content[], int maxCount);

int main(void) {
	FILE *fptr;
	int maxCount = 100;
	char fileName[30];
	char content[maxCount];
	
	printf("Enter a file name: ");
	acceptFileName(fileName);
	
	printf("Enter a content to append: ");
	accpetContent(content, maxCount);

	fptr = fopen(fileName, "a");
	fputs(content, fptr);
	
	fclose(fptr);
	
	return 0;
}

void acceptFileName(char fileName[]) {
	scanf("%s", fileName);
	fflush(stdin);
}

void accpetContent(char content[], int maxCount) {
	fgets(content, maxCount, stdin);
	content[strcspn(content, "\n")] = '\0';
}

