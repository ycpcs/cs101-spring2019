#include <stdio.h>

int main(void) {
	int height, width;
	printf("Enter height: ");
	scanf("%i", &height);
	printf("Enter width: ");
	scanf("%i", &width);


	/*
	Goal:
	+------------------------+
	|                        |
	|                        |
	|                        |
	+------------------------+
	*/
	for (int i = 1; i <= height; i++) {
		for (int j = 1; j <= width; j++) {
/*
			if (i == 1 && j == 1) { // upper left
				printf("+");
			} else if (i == 1 && j == width) { // upper right
				printf("+");
			} else if (i == height && j == 1) { // lower left
				printf("+");
			} else if (i == height && j == width) { // lower right
				printf("+");
*/
			if ( (i == 1 || i == height) && (j == 1 || j == width) ) {
				printf("+");
			} else if ( (i == 1 || i == height) && j > 1 && j < width ) {
				printf("-");
			} else if ( (j == 1 || j == width) && i > 1 && i < height) {
				printf("|");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
