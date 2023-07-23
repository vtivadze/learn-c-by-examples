#include <stdio.h>
#include <stdbool.h>

bool check_is_palindrome(int num);
int reverse_number(int num);

int main(void) {
	int num;
	bool is_palindrome;	
	
	printf("Enter a number:");
	scanf("%d", &num);
	
	is_palindrome = check_is_palindrome(num);
	
	if (is_palindrome) {
		printf("Number is palindrome.\n");
	} else {
		printf("Number is not palindrome.\n");
	}
	
	return 0;
}

bool check_is_palindrome(int num) {
	int rev = reverse_number(num);
	return num == rev;
}

int reverse_number(int num) {
	static int rev;
	
	if (num < 10) {
		return rev * 10 + num;
	}
	rev = rev * 10 + num % 10;
	
	return reverse_number(num / 10);
}
