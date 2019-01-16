#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	#define MAX_SIZE 100	// max size of array
	#define MIN_RAND 1		// minimum random #
	#define MAX_RAND 1000	// maximum random #
	
	int random[MAX_SIZE];	// holds random value
	int odds[MAX_SIZE];		// holds odd values
	int evens[MAX_SIZE];	// holds even values

	// **************************************************************** //
	// populate an array of 100 integers with random #'s in the range
	//	        MIN_RAND to MAX_RAND.
	// **************************************************************** //

	// seed the random # differently each time
	srand(time(0));
	
	// generate random integer sfrom 1 to 1000
	// and populate the random array
	for (int i = 0; i < MAX_SIZE; i++)
	{
		random[i] = rand() % MAX_RAND + MIN_RAND;
	}
	
	// make sure to initialize variables
	int sum     = 0;
	double mean = 0.0;
	
	// sum up the entire array
	for (int i = 0; i < MAX_SIZE; i++)
	{
		sum += random[i];
	}
	
	// find average, cast to double first
	mean = (double) sum / MAX_SIZE;
	
	// output result
	printf("mean = %0.2lf\n", mean);
	
	// find min and max from array
	int min = MAX_RAND;		// minimum value, initialized to MAX value
	int max = MIN_RAND;		// maximum value, initialized to MIN value
	
	for (int i = 0; i < MAX_SIZE; i++)
	{
		// if arrray value < current min
		// update min
		if (random[i] < min)
		{
			min = random[i];
		}
		
		// if array value > current max
		// update max
		if (random[i] > max)
		{
			max = random[i];
		}
	}

	// output min/max results
	printf("min: %i\n", min);
	printf("max: %i\n", max);
	
	// find the # of even values and # of odd values
	// find the average of evens and odds
	// populate even and odd arrays
	int oddCount  = 0;			// # of odd values
	int evenCount = 0;			// # of even values
	double oddValsAve  = 0.0;	// accumulates and then stores average of odd values
	double evenValsAve = 0.0;	// accumulates and then stores average of even values
	
	for (int i = 0; i < MAX_SIZE; i++)
	{
		// even #
		// sum evens
		// place in evens arrray
		if (random[i] % 2 == 0)
		{
			evenValsAve     += random[i];
			evens[evenCount] = random[i];
			evenCount++;
		}
		// odd #
		// sum odds
		// place in odds array
		else
		{
			oddValsAve    += random[i];
			odds[oddCount] = random[i];
			oddCount++;
		}
	}
	
	// if any even values, find average
	if (evenCount > 0)
	{
		evenValsAve /= evenCount;
	}
	
	// if any odd values, find average
	if (oddCount > 0)
	{
		oddValsAve /= oddCount;
	}
	
	// output results
	printf("even vals: %0.2lf (%i)\n", evenValsAve, evenCount);
	printf("odd vals:  %0.2lf (%i)\n", oddValsAve, oddCount);
	
	// accumulates and then stores average of values at odd  locations	
	double oddLocsAve  = 0.0;
	
	// accumulates and then stores average of values at even locations
	double evenLocsAve = 0.0;
	
	// find the average of values at even and odd locations
	for (int i = 0; i < MAX_SIZE; i++)
	{
		// even location
		// sum values at even locations
		if (i % 2 == 0)
		{
			evenLocsAve += random[i];
		}
		// odd location
		// sum values at odd locations
		else
		{
			oddLocsAve += random[i];
		}
	}
	
	// find average of values at even and odd locations
	evenLocsAve /= (MAX_SIZE / 2);
	oddLocsAve  /= (MAX_SIZE / 2);
	
	// output results
	printf("even locations: %0.2lf (%i)\n", evenLocsAve, MAX_SIZE / 2);
	printf("odd locations:  %0.2lf (%i)\n", oddLocsAve,  MAX_SIZE / 2);
	
	// count the values that are within +- 50% of the mean
	int count = 0;
	
	for (int i = 0; i < MAX_SIZE; i++)
	{
		// if the random value is within the range, count it
		if ((random[i] >= (mean * 0.50)) && (random[i] <= mean * 1.5))
		{
			count++;
		}
	}
	
	// output result
	printf("# of values within +/- 50%% of mean: %i\n", count++);

	return 0;
}
