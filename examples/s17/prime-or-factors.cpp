#include <stdio.h>

int main(void)
{
	// ****************************************************************
	// determine if a number is prime
	// output and count its factors if it's not prime
	// ****************************************************************
	int n = 1;			// input value to factor
	int factors = 0;	// counts factors
	
	// get value to factor from user
	// validate input
	while (n < 2)
	{
		printf("Enter an integer (>= 2): ");
		scanf("%i", &n);
	}
		
	// loop through all potential factors
	for (int i = 2; i <= n/2; i++)
	{
		// check if n is divisible by this # (then # is a factor of n)
		if (n % i == 0)
		{
			// keep count of factors
			factors++;
			
			// if first factor, output this header, and factor
			if (factors == 1)
			{
				printf("%i has factors: %i", n, i);
			}
			// otherwise, just output factor (comma separated)
			else
			{
				printf(", %i", i);
			}
		}
	}
	
	// if no factors, indicate that n is prime
	if (factors == 0)
	{
		printf("\n%i is prime\n", n);
	}
	// otherwise, output factor count
	else
	{
		printf("\n\n%i has %i factors\n\n", n, factors);
	}

	return 0;
}
