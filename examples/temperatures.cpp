#include <stdio.h>

int main(void) {
	//double temp1, temp2, temp3, temp4;
	double temp[7];

	printf("Enter 7 temperatures:\n");
/*
	scanf("%lf", &temp1);
	scanf("%lf", &temp2);
	scanf("%lf", &temp3);
	scanf("%lf", &temp4);
*/
/*
	scanf("%lf", &temp[0]);
	scanf("%lf", &temp[1]);
	scanf("%lf", &temp[2]);
	scanf("%lf", &temp[3]);
	scanf("%lf", &temp[4]);
	scanf("%lf", &temp[5]);
	scanf("%lf", &temp[6]);
*/
	for (int i = 0; i < 7; i++) {
		scanf("%lf", &temp[i]);
	}

	// Find the highest temperature
	double high = temp[0];
	for (int i = 1; i < 7; i++) {
		if (temp[i] > high) {
			high = temp[i];
		}
	}

	printf("High temperature was %lf\n", high);

	return 0;
}
