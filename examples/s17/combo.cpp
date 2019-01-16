#include <stdio.h>

/*
Input:
  combo       combination entered by user        int

Output:
  wrong combo msg (bad)          printed
  correct combo msg (good)       printed
  catastrophe msg (very bad)     printed
*/

int main(void) {
	int combo;

	int keep_going = 1;
	int failed_attempts = 0;

	while (keep_going == 1) {
		printf("Enter combination: ");
		scanf("%i", &combo);

		// correct combination is 378
		if ( combo == 378 ) {
			printf("You defused the bomb, yay!\n");
			keep_going = 0;
		} else {
			printf("Oops, combination is incorrect\n");
			failed_attempts++;
			if ( failed_attempts > 3 ) {
				printf("Boom!\n");
				keep_going = 0;
			}
		}
	}
	return 0;
}
