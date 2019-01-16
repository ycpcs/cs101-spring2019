#include <stdio.h>

// maximum number of temperature values program can store
#define MAX 100

int main(void) {
	int num_temps;
	double temp[MAX];

	// read number of temperature values
	printf("How many temperature values? ");
	scanf("%i", &num_temps);
	if (num_temps > MAX) {
		printf("Too many temperatures\n");
		return 0;
	}

	// read temperature values
	printf("Enter temperatures:\n");
	for (int i = 0; i < num_temps; i++) {
		/*
		double value;
		scanf("%lf", &value);
		temp[i] = value;
		*/
		scanf("%lf", &temp[i]);
	}

	// find average temperature
	double sum = 0.0;
	for (int i = 0; i < num_temps; i++) {
		sum += temp[i];
	}
	double avg = sum / num_temps;
	printf("Average temperature is %lf\n", avg);

	// find min and max temperatures
	double min = temp[0];
	double max = temp[0];
	for (int i = 1; i < num_temps; i++) {
		if (temp[i] < min) {
			min = temp[i];
		}
		if (temp[i] > max) {
			max = temp[i];
		}
	}
	printf("Minimum temperature is %lf\n", min);

	return 0;
}
