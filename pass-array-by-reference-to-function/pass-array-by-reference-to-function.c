#include <stdio.h>

void updateArray(int []);

int main(void) {
	int i, a[5] = {1, 2, 3, 4, 5};
	updateArray(a);
	
	for (i = 0; i < 5; i++) {
		printf("%d: %d\n", i, a[i]);
	}
}

void updateArray(int a[]) {
	int i;
	
	for (i = 0; i < 5; i++) {
		a[i] += 10;
	}
}
