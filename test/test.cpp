#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, i;
	
	printf("Enter size of array: ");
	scanf("%d", &n);
	
	char *c = (char *)calloc(n, sizeof(char));
	for (i = 0; i < n; ++i) {
		c[i] = 1;
	}
	printf("Calloc was created.\n");
	
	char *m = (char *)malloc(n * sizeof(char));
	for (i = 0; i < n; ++i) {
		m[i] = 1;
	}
	printf("Malloc was created.\n");
	
	free(c);
	
	system("pause");
	
	return 0;
}
