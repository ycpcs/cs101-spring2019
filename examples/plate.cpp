#include <stdio.h>

#define NROWS 10
#define NCOLS 10

int main(void) {

	double plate[NROWS][NCOLS];

	double left, right, top, bottom;

	printf("Left temperature: ");
	scanf("%lf", &left);
	printf("Right temperature: ");
	scanf("%lf", &right);
	printf("Top temperature: ");
	scanf("%lf", &top);
	printf("Bottom temperature: ");
	scanf("%lf", &bottom);

	// Start by initializing all cells to 0
	for (int i = 0; i < NROWS; i++) {
		for (int j = 0; j < NCOLS; j++) {
			plate[i][j] = 0.0;
		}
	}

	// Set temperatures for top and bottom rows
	for (int j = 0; j < NCOLS; j++) {
		plate[0][j] = top;
		plate[NROWS-1][j] = bottom;
	}

	// Set temperatures for left and right columns
	for (int i = 1; i < NROWS-1; i++) {
		plate[i][0] = left;
		plate[i][NCOLS-1] = right;
	}

	// print original temperatures
	printf("Original temperatures:\n");
	for (int i = 0; i < NROWS; i++) {
		for (int j = 0; j < NCOLS; j++) {
			printf("%6.1lf ", plate[i][j]);
		}
		printf("\n");
	}

	// compute new temperatures for interior of plate
	double next[NROWS][NCOLS];

	for (int i = 0; i < NROWS; i++) {
		for (int j = 0; j < NCOLS; j++) {
			if (i == 0 || i == NROWS-1 || j == 0 || j == NCOLS-1) {
				// Edge cell: just copy the original temperature
				next[i][j] = plate[i][j];
			} else {
				// Interior cell: temperature is the average of
				// the top/bottom/left/right neighbors
				double sum_neighbors = plate[i-1][j] + plate[i+1][j] + plate[i][j-1] + plate[i][j+1];
				next[i][j] = sum_neighbors / 4.0;
			}
		}
	}

	// print updated temperatures
	printf("Updated temperatures:\n");
	for (int i = 0; i < NROWS; i++) {
		for (int j = 0; j < NCOLS; j++) {
			printf("%6.1lf ", next[i][j]);
		}
		printf("\n");
	}

	return 0;
}
