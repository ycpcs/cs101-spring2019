#include <stdio.h>

void multiply_by_2(int *p); // reference parameter!

int main(void) {
	int n;
	printf("Raise 2 to what power? ");
	scanf("%i", &n);

	int product = 1;
	for (int i = 1; i <= n; i++) {
		multiply_by_2(&product);
	}
	printf("2^%i = %i\n", n, product);
	return 0;
}

void multiply_by_2(int *p) {
	*p = *p * 2;
}
