#include <stdio.h>

int main(void) {
	int age;
	
	printf("Your age: ");
	scanf("%i", &age);
	
	double price; // FIXME: bad idea to store money in floating point var
	
	if (age < 7) {
		price = 4.50;
	} else {
		price = 6.50;
	}
	
	printf("Ticket price is $%.2lf\n", price);
	
	return 0;
}
