#include <stdio.h>

void draw_top_bottom_line(int length) {
	for (int i = 1; i <= length; i++) {
		if (i == 1 || i == length) {
			printf("+");
		} else {
			printf("-");
		}
	}
	printf("\n");
}

void draw_middle_line(int length) {
	for (int i = 1; i <= length; i++) {
		if (i == 1 || i == length) {
			printf("|");
		} else {
			printf(" ");
		}
	}
	printf("\n");
}

int main(void) {
	int width, height;

	printf("Enter width: ");
	scanf("%i", &width);
	printf("Enter height: ");
	scanf("%i", &height);

	draw_top_bottom_line(width);

	// height-2 times
	for (int j = 1; j <= height - 2; j++) {
		draw_middle_line(width);
	}

	draw_top_bottom_line(width);

	return 0;
}
