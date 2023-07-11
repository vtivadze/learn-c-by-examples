#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void acceptFileName(char fileName[]);
bool createFile(FILE **fptr, char fileName[]);
void acceptContent(char content[], int contmaxsize);

int main(void) {
	FILE *fptr;
	int fnmaxsize = 30, contmaxsize = 100;
	char fileName[fnmaxsize], content[contmaxsize];
	
	printf("Enter file name: ");
	acceptFileName(fileName);
	
	if (!createFile(&fptr, fileName)) {
		printf("Could not create a file.\n");
		return 0;
	}
	
	printf("Enter a content:\n");
	acceptContent(content, contmaxsize);
	
	fputs(content, fptr);
	fclose(fptr);
	
	return 0;
}

void acceptFileName(char fileName[]) {
	scanf("%s", fileName);
	fflush(stdin);
//	fgets(fileName, fnmaxsize, stdin);
//	fileName[strcspn(fileName, "\n")] = '\0';
}

bool createFile(FILE **fptr, char fileName[]) {
	if ((*fptr = fopen(fileName, "w")) == NULL) {
		return false;
	}
	return true;
}

void acceptContent(char content[], int contmaxsize) {
	fgets(content, contmaxsize, stdin);
}

