#include <stdio.h>

int main(void)
{
	// declare variables for input values
	int month;
	int day;
	int year;
	
	// prompt for input and read input values
	printf("Month? ");
	scanf("%i", &month);
	printf("Day? ");
	scanf("%i", &day);
	printf("Year? ");
	scanf("%i", &year);
	
	// print output date
	printf("Date is %i/%i/%i\n", month, day, year);
	
	return 0;
}