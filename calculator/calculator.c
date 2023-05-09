#include <stdio.h>

int main() {
	float num1, num2;
	char oper;
	char statement[256];
	
	printf("Enter mathematical operation: ");
	fgets(statement, 256, stdin);
	
	sscanf(statement, "%f%c%f", &num1, &oper, &num2);

	switch (oper) {
		case '+':
			printf("\nResult: %f\n", num1 + num2);
			break;
		case '-':
			printf("\nResult: %f\n", num1 - num2);
			break;
		case '*':
			printf("\nResult: %f\n", num1 * num2);
			break;
		case '/':
			printf("\nResult: %f\n", num1 / num2);
			break;
		case '%':
			printf("\nResult: %d\n", (int)num1 % (int)num2);
			break;
		default:
			printf("\nUnknown operation.\n");
	}

	return 0;
}
