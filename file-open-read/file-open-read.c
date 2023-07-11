#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void acceptFileName(char fileName[]);
bool openFile(FILE **file, char fileName[]);
void readFile(FILE **file, char fileContent[]);
void printContent(char fileContent[]);

int main(void) {
	char fileName[30], fileContent[100];
	FILE *file = NULL;
	
	// Accept file name
	printf("Enter file name: ");
	acceptFileName(fileName);
	
	// Open file
	if (!(&file, fileName)) {
		printf("File %s does not exist.\n", fileName);
		return 0;
	}
	
	// Read file
	readFile(&file, fileContent);
	
	// Display file content
	printContent(fileContent);
	
	// Close file
	fclose(file);
	
	return 0;
}

void acceptFileName(char fileName[]) {
	scanf("%s", fileName);
}

bool openFile(FILE **file, char fileName[30]) {
	if ((*file = fopen(fileName, "r")) == NULL) {
		return false;
	}
	return true;
}

void readFile(FILE **file, char fileContent[]) {
	char ch;
	int counter = 0;
	
	while((ch = getc(*file)) != EOF) {
		fileContent[counter++] = ch;
	}
}

void printContent(char fileContent[]) {
	printf("This is a file content:\n\n");
	printf("%s\n", fileContent);
}
