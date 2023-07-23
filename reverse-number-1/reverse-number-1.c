#include <stdio.h>

int reverse_number(int num);

int main(void) {
	int num, rev;
	
	printf("Enter a number:");
	scanf("%d", &num);
	
	rev = reverse_number(num);
	printf("Reverse number:%d\n", rev);
	
	return 0;
}

int reverse_number(int num) {
	static int rev = 0;
	
	if (num / 10 == 0) {
		return rev * 10 + num;
	}
	rev = rev * 10 + num % 10;
	
	return reverse_number(num / 10);
}

