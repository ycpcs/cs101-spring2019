#include <stdio.h>

/*
Design:

Problem: compute the average of three weight values

Input:
name         desc.             data type
-------------------------------------------
weight1      weight of obj 1   double
weight2      weight of obj 1   double
weight3      weight of obj 1   double

Output:
output              form            data type
----------------------------------------------
average of weights  printed         double

Strategy:
declare input variables
prompt/read inputs
compute average
print average
*/

int main(void) {
	// declare input variables
	double weight1, weight2, weight3;
	
	// prompt/read inputs
	printf("Weight of first object: ");
	scanf("%lf", &weight1);
	printf("Weight of second object: ");
	scanf("%lf", &weight2);
	printf("Weight of third object: ");
	scanf("%lf", &weight3);
	
	// compute average
	double average;
	average = (weight1 + weight2 + weight3) / 3.0;
	
	// print average
	printf("Average is %.2f\n", average);
	
	return 0;
}
