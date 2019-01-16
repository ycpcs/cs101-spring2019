#include <stdio.h>

int main(void) {
	int n;

	printf("Enter an integer: ");
	scanf("%i", &n);

	// print factors of integer
	// (each smaller positive integer >1) of which n is
	// an exact multiple)

	// consider all smaller integers in the range 2..n-1

	// Example plan: let's say n=12
	//     i=11   n divisible by i? no
	//     i=10   n divisible by i? no
	//     i=9    n divisible by i? no
	//     i=8    n divisible by i? no
	//     i=7    n divisible by i? no
	//     i=6    n divisible by i? yes (print 6)
	//     i=5    n divisible by i? no
	//     i=4    n divisible by i? yes (print 4)
	//     i=3    n divisible by i? yes (print 3)
	//     i=2    n divisible by i? yes (print 2)

	for (int i = n-1; i >= 2; i--) {
		// is n divisible by i?
		if (n % i == 0) {
			// i is a factor of n
			printf("%i is a factor of %i\n", i, n);
		}
	}

	return 0;
}
