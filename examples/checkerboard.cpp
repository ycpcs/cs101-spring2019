#include <stdio.h>

int main(void)
{
	// **************************************************************** //
	// Example 2:
	// output a checker-board of 'X's and 'O's of user specified dimensions
	// start with an 'X' in the upper-left corner
	// **************************************************************** //
	int height, width;	// board dimensions
	char boardChar;		// holds char to be printed

	// get width from user
	printf("Input width of checkerboard: ");
	scanf("%i", &width);
	   
	// get height from user
	printf("Input height of checkerboard: " );
	scanf("%i", &height);

	// for each row of checkerboard (height)
	for (int row = 1; row <= height; row++)
	{
		// for each column of checkerboard (width)
		for (int col = 1; col <= width; col++)
		{
			// if row is odd
			if (row % 2 == 1)
			{
				// print 'X's for odd columns
				if (col % 2 == 1)
				{
					boardChar = 'X';
				}
				// print 'O's for even columns
				else
				{
					boardChar = 'O';
				}
			}
			// otherwise, row is even
			else
			{
				// print O's for odd columns
				if (col % 2 == 1)
				{
					boardChar = 'O';
				}
				// print X's for even columns
				else
				{
					boardChar = 'X';
				}
			}
			
			// print the checkerboard character for this location
			printf("%c", boardChar);
		}
		
		// terminate line at end of row
		printf("\n");
	}
	return 0;
}
