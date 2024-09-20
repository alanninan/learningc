#include <stdio.h>

int main() {
	int a, b;

	// user input
	printf("Enter a value for `a`: ");
	scanf("%d", &a);
	printf("Enter a value for `b`: ");
	scanf("%d", &b);

	printf("\nBEFORE SWAP: a = %d, b = %d\n", a, b);

	// swap
	a = a + b;
	b = a - b;
	a = a - b; 

	printf("AFTER SWAP: a = %d, b = %d\n", a, b);
	return 0;
}

