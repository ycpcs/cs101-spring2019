#include <stdio.h>

int main(void) {
	int width, height;

	printf("Enter width: ");
	scanf("%i", &width);

	printf("Enter height: ");
	scanf("%i", &height);

	for (int i = 1; i <= height; i++) {
		for (int j = 1; j <= width; j++) {
			//printf("*");
			if ( i == 1 || i == height
				|| j == 1 || j == width ) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
