#include <stdio.h>

void draw_row(char endch, char midch, int w);

int main(void) {
	int height, width;

	printf("Enter height: ");
	scanf("%i", &height);

	printf("Enter width: ");
	scanf("%i", &width);

	draw_row('+', '-', width);
	for (int i = 1; i <= height-2; i++) {
		draw_row('|', ' ', width);
	}
	draw_row('+', '-', width);

	return 0;
}

void draw_row(char endch, char midch, int w) {
	printf("%c", endch);
	for (int i = 1; i <= w-2; i++) {
		printf("%c", midch);
	}
	printf("%c\n", endch);
}
