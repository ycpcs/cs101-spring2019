#include<stdio.h>

int main(void)
{
	int height, width;
	char cornerChar;
    
    /*
    Example Goal:
    +----------------+
    |                |
    |                |
    |                |
    +----------------+
    */
    
	// get width from user
	printf("Input width of rectangle: ");
	scanf("%i", &width);
	   
	// get height from user
	printf("Input height of rectangle: " );
	scanf("%i", &height);
	   
	// get corner character from user
	printf("Input corner character for rectangle: ");
	scanf(" %c", &cornerChar);
	   
	// output rectangle - nested loop
	// for each row (height)
	//     for length of each line (width)
		
	// this loop prints the rows (height)
	for (int i = 1; i <=  height; i++)
	{
		// this loop prints the characters in a row (width)
		for (int j = 1; j <= width; j++)
		{
		   // there are 4 special conditions - the 1st and last rows get corner characters
		   // so that's (1, 1), (height, 1), (1, width), (height, width)
		   
		   // if printing top or bottom row
		   // print special character for end characters, and '-', otherwise
		   // example: "*--------*"
		   if ((i == 1) || (i == height))
		   {
				// if printing first or last character in row
				// print the special corner character
				if ((j == 1) || (j == width))
				{
					printf("%c", cornerChar);
				}
				// otherwise, print '-'s for internal characters for top and bottom rows
				else
				{
					printf("-");
				}
			}
			// otherwise, printing internal row
			// print a '|' for end characters in row, and ' ', otherwise
			// example: "|---------|"
			else
			{
				// if printing first or last character in row
				// print '|' (bar)
				if ((j == 1) || (j == width))
				{
					printf("|");
				}
				// otherwise, print ' ' (space) for internal characters
				else
				{
					printf(" ");
				}
			}
		}
		
		// terminate each row with new line
		printf("\n");   
	}
	return 0;
}
