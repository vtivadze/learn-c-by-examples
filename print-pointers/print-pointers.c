#include <stdio.h>

int main(void) {
	int i = 5;
	int *pi = &i;
	
	short int si = 10;
	short int *psi = &si;
	
	unsigned int ui = 20;
	unsigned int *pui = &ui;
	
	long int li = 25;
	long int *pli = &li;
	
	unsigned long int uli = 30;
	unsigned long int *puli = &uli;
	
	long long int lli = 35;
	long long int *plli = &lli;
	
	unsigned long long int ulli = 40;
	unsigned long long int *pulli = &ulli;
	
	float f = 3.02;
	float *pf = &f;
	
	double d = 5.25;
	double *pd = &d;
	
	long double ld = 10.03;
	long double *pld = &ld;
	
	char c = 'a';
	char *pc = &c;
	
	signed char sc = 'b';
	signed char *psc = &sc;
	
	unsigned char uc = 'c';
	unsigned char *puc = &uc;
	
	printf("Size of integer: %d\n", sizeof(*pi));
	printf("Size of pointer to integer: %d\n", sizeof(pi));
	
	printf("\nSize of short integer: %d\n", sizeof(*psi));
	printf("Size of pointer to short integer: %d\n", sizeof(psi));
	
	printf("\nSize of unsigned integer: %d\n", sizeof(*pui));
	printf("Size of pointer to unsigned integer: %d\n", sizeof(pui));
	
	printf("\nSize of long integer: %d\n", sizeof(*pli));
	printf("Size of pointer to long integer: %d\n", sizeof(pli));
	
	printf("\nSize of unsigned long integer: %d\n", sizeof(*puli));
	printf("Size of pointer to unsigned long integer: %d\n", sizeof(puli));
	
	printf("\nSize of long long integer: %d\n", sizeof(*plli));
	printf("Size of pointer to long long integer: %d\n", sizeof(plli));
	
	printf("\nSize of unsigned long long integer: %d\n", sizeof(*pulli));
	printf("Size of pointer to unsigned long long integer: %d\n", sizeof(pulli));
	
	printf("\nSize of float: %d\n", sizeof(*pf));
	printf("Size of pointer to float: %d\n", sizeof(pf));
	
	printf("\nSize of double: %d\n", sizeof(*pd));
	printf("Size of pointer to double: %d\n", sizeof(pd));
	
	printf("\nSize of long double: %d\n", sizeof(*pld));
	printf("Size of pointer to long double: %d\n", sizeof(pld));
	
	printf("\nSize of character: %d\n", sizeof(*pc));
	printf("Size of pointer to character: %d\n", sizeof(pc));
	
	printf("\nSize of signed character: %d\n", sizeof(*psc));
	printf("Size of pointer to signed character: %d\n", sizeof(psc));
	
	printf("\nSize of unsigned character: %d\n", sizeof(*puc));
	printf("Size of pointer to unsigned character: %d\n", sizeof(puc));
	
	return 0;
}
