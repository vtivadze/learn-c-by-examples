#include <stdio.h>

void acceptFileName(char fname[]);
void copyFileContent(FILE **sfptr, FILE **fptr);

int main(void) {
	const int fnamesize = 30;
	char sfname[fnamesize], dfname[fnamesize];
	FILE *sfptr, *dfptr;
	
	printf("Enter source file name: ");
	acceptFileName(sfname);
	
	printf("Enter desitination file name: ");
	acceptFileName(dfname);
	
	sfptr = fopen(sfname, "r");
	dfptr = fopen(dfname, "a");
	
	copyFileContent(&sfptr, &dfptr);
	
	fclose(sfptr);
	fclose(dfptr);
	
	return 0;
}

void acceptFileName(char fname[]) {
	scanf("%s", fname);
	fflush(stdin);
}

void copyFileContent(FILE **sfptr, FILE **dfptr) {
	char ch;
	
	while ((ch = fgetc(*sfptr)) != EOF) {
		fputc(ch, *dfptr);
	}	
}

