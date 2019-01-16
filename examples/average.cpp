#include <stdio.h>

int main(void) {
	// Strategy:
	// - declare four variables (double)
	double v1, v2, v3, v4;
	
	// - prompt user to enter four real numbers
	printf("Enter four values: ");
	scanf("%lf %lf %lf %lf", &v1, &v2, &v3, &v4);
	
	// - declare variable to store average
	double average;
	average = (v1 + v2 + v3 + v4) / 4.0;
	
	// - compute average, store in variable
	// - print the average
	printf("Average is %8.2lf\n", average);
	
	return 0;
}