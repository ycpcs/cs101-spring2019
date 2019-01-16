#include <stdio.h>

int main(void) {
	// 0-60 mph time in seconds
	double t, v, a, gs;
	
	printf("How many seconds to reach 60 mph? ");
	scanf("%lf", &t);
	
	// Convert 60 mph to m/s
	v = (60.0) * (1609.0 / 3600.0);
	
	// acceleration is vel / time
	a = v / t;
	
	// G's is a / 9.81
	gs = a / 9.81;
	
	printf("You experienced %lf G's\n", gs);
	
	return 0;
}