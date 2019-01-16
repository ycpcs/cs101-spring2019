#include <stdio.h>

int main(void) {
	printf("Think of a number from 1-100\n");

	int min = 1, max = 100;
	char answer;

	while ( min != max ) {

		// guess a number
		int guess = min + ((max-min)/2);

		// ask if correct
		printf("Are you thinking of %i? (y/n) ", guess);
		scanf(" %c", &answer);

		// if correct, yay
		if (answer == 'y' || answer == 'Y') {
			min = guess;
			max = guess;
		} else {
			// if not correct, ask if high or low
			printf("Is your number higher than %i? (y/n) ", guess);
			scanf(" %c", &answer);

			// constrain range
			if (answer == 'y' || answer == 'Y') {
				min = guess + 1;
			} else {
				max = guess - 1;
			}
		}
	}

	// print correct guess
	printf("You are thinking of %i\n", min);

	return 0;
}
