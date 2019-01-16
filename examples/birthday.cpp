#include <stdio.h>

int main(void) {
	// Strategy:
	//   - declare variables for birthday month,
	//     day, year
	int month;
	int day;
	int year;
	
	//   - ask user for his/her birthday month,
	//     day, year
	printf("Enter your birthday (M/D/Y): ");
	scanf("%i", &month);
	scanf("%i", &day);
	scanf("%i", &year);
	
	//   - print out birthday month, day, year
	printf("Your birthday is %i/%i/%i\n", month, day, year);
	
	return 0;
}