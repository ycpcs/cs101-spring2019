#include <stdio.h>

int main(void) {
	int width, height;

	printf("Enter height: ");
	scanf("%i", &height);

	printf("Enter width: ");
	scanf("%i", &width);

	for (int i = 1; i <= height; i++) {
		for (int j = 1; j <= width; j++) {
			printf(".");
		}
		printf("\n");
	}

	return 0;
}
