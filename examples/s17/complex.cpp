#include <stdio.h>

struct Complex {
	double real;
	double imag;
};

struct Complex complex_init(double r, double i);
struct Complex complex_add(struct Complex c1, struct Complex c2);
struct Complex complex_multiply(struct Complex c1, struct Complex c2);

int main(void) {
	struct Complex p, q;

	double r, i;

	printf("Enter real and imaginary values: ");
	scanf("%lf", &r);
	scanf("%lf", &i);
	p = complex_init(r, i);

	printf("Enter real and imaginary values: ");
	scanf("%lf", &r);
	scanf("%lf", &i);
	q = complex_init(r, i);

	struct Complex sum, product;
	sum = complex_add(p, q);
	product = complex_multiply(p, q);

	printf("Sum is %.2lf + %.2lfi\n", sum.real, sum.imag);
	printf("Product is %.2lf + %.2lfi\n", product.real, product.imag);

	return 0;
}

struct Complex complex_init(double r, double i) {
	struct Complex result;

	result.real = r;
	result.imag = i;

	return result;
}

struct Complex complex_add(struct Complex c1, struct Complex c2) {
	struct Complex result;

	result.real = c1.real + c2.real;
	result.imag = c1.imag + c2.imag;

	return result;
}

struct Complex complex_multiply(struct Complex c1, struct Complex c2) {
	struct Complex result;

	double a = c1.real;
	double b = c1.imag;
	double c = c2.real;
	double d = c2.imag;

	result.real = a*c - b*d;
	result.imag = b*c + a*d;

	return result;
}
