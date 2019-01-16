#include <stdio.h>

int main(void) {
	double base_price;
	int age;

	printf("Ticket base price: ");
	scanf("%lf", &base_price);

	printf("Enter age: ");
	scanf("%i", &age);

	double discount;

	// infant (0-1): free
	if ( age >= 0 && age <= 1 ) {
		discount = 0.0;
	}
	// child (2-6): 50% discount
	else if ( age >= 2 && age <= 6 ) {
		discount = 0.5;
	}
	// youth (7-13): 25% discount
	else if ( age >= 7 && age <= 13 ) {
		discount = 0.75;
	}
	// adult (14-64): no discount
	else if ( age >= 14 && age <= 64 ) {
		discount = 1.0;
	}
	// senior (65+): 25% discount
	else if ( age >= 65 ) {
		discount = 0.75;
	}
	// invalid age
	else {
		printf("Invalid age\n");
		return 0;
	}

	double ticket_price = base_price * discount;
	printf("Ticket price is $%.2lf\n", ticket_price);

	return 0;
}
