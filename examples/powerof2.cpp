#include <stdio.h>

void mult_by_2(int *p);

int main(void) {
	int a;

	printf("Enter a non-negative integer: ");
	scanf("%i", &a);

	int product = 1;
	for (int i = 1; i <= a; i++) {
		//product = product * 2;
		mult_by_2(&product);
	}

	printf("2^%i = %i\n", a, product);

	return 0;
}

void mult_by_2(int *p) {
	*p = *p * 2;
}
