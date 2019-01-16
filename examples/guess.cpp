#include <stdio.h>

int main(void) {
	printf("Think of an integer between 1 and 100\n");

	int min, max;
	min = 1;
	max = 100;

	while ( min != max /* we don't know the correct number */ ) {

		// guess a number in middle of current range
		int guess = min + (max-min+1)/2;

		// ask whether guess was correct
		printf("Are you thinking of %i? (y/n) ", guess);

		char answer;
		scanf(" %c", &answer);

		if ( answer == 'y' /* guess was correct */ ) {
			// we're done
			min = guess;
			max = guess;

		} else {
			// ask whether guess was too high or too low
			printf("Is %i too high? (y/n)", guess);
			scanf(" %c", &answer);

			if ( answer == 'y' /* guess was too high */) {
				// update maximum to less than guess
				max = guess - 1;
			} else {
				// update minimum to greater than guess
				min = guess + 1;
			}
		}

	}

	// print correct guess
	printf("You are thinking of %i\n", min);

	return 0;
}
