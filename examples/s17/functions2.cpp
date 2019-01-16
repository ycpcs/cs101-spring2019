#include <stdio.h>

int factorial(int n);

int main(void) {
	int value;
	printf("Enter a non-negative integer: ");
	scanf("%i", &value);
	int answer = factorial(value);
	printf("%i! = %i\n", value, answer);
	return 0;
}

int factorial(int n) {
	// (1) Define a result variable whose type is
	// the same as the return type.
	int result;

	// (3) Write code that does the computation and
	// assigns a value to the result variable.
	result = 1;
	for (int i = n; i >= 1; i--) {
		result = result * i;
	}

	// (2) Return the value of the result variable.
	return result;
}
