#include <stdio.h>

#define MAX 100

void read_values(double data[], int nval);
double compute_mean(const double data[], int nval);

int main(void) {
	double values[MAX];
	int num_values;

	printf("Number of values? ");
	scanf("%i", &num_values);

	if (num_values > MAX) {
		printf("Too many values, sorry\n");
		return 1;
	}

	// read values
	read_values(values, num_values);

	// compute mean
	double avg;
	avg = compute_mean(values, num_values);
	printf("Average is %lf\n", avg);

	return 0;
}

void read_values(double data[], int nval) {
	for (int i = 0; i < nval; i++) {
		scanf("%lf", &data[i]);
	}
}

double compute_mean(const double data[], int nval) {
	double mean;

	//data[0] = 42.0;

	double sum = 0.0;
	for (int i = 0; i < nval; i++) {
		sum = sum + data[i];
	}

	mean = sum / nval;

	return mean;
}
