#include <stdio.h>

#define MAX 100

void read_data(double data[], int nval);
void print_data(const double data[], int nval);

int main(void) {
	double values[MAX];
	int num_values;

	printf("How many values? ");
	scanf("%i", &num_values);

	if (num_values > MAX) {
		printf("Too many values, sorry\n");
		return 1;
	}

	printf("Enter the values:\n");
	read_data(values, num_values);

	printf("Here are your values:\n");
	print_data(values, num_values);
}

void read_data(double data[], int nval) {
	for (int i = 0; i < nval; i++) {
		scanf("%lf", &data[i]);
	}
}

void print_data(const double data[], int nval) {
	for (int i = 0; i < nval; i++) {
		printf("%lf ", data[i]);
	}
	printf("\n");
}
