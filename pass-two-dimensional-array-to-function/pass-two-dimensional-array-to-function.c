#include <stdio.h>

void displayArray(int[2][2]);

int main(void) {
	int a[2][2] = { {1, 2}, {3, 4}};
	displayArray(a);
	return 0;
}

void displayArray(int a[2][2]) {
	int i, j;
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("a[%d][%d] = %d\t", i, j, a[i][j]);
		}
		printf("\n");
	}
}
