#include <stdio.h>

int main() {
	int a, b, temp;

	// user input
	printf("Enter a value for `a`: ");
	scanf("%d", &a);
	printf("Enter a value for `b`: ");
	scanf("%d", &b);

	printf("\nBEFORE SWAP: a = %d, b = %d\n", a, b);

	// swap
	temp = a;
	a = b;
	b = temp;

	printf("AFTER SWAP: a = %d, b = %d\n", a, b);
	return 0;
}

