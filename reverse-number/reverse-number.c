#include <stdio.h>

int reverse_number(int num);

int main(void) {
	int num, rev_num;
	
	printf("Enter a number:");
	scanf("%d", &num);
	
	rev_num = reverse_number(num);
	printf("Reverse number:%d\n", rev_num);
	
	return 0;
}

int reverse_number(int num) {
	int rev = 0;
	
	do {
		rev = rev * 10 + num % 10;
	} while ((num /= 10) != 0);
	
	return rev;
}
