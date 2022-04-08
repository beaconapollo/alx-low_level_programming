#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Check a number is positive, zero or negative
 * Main functiono returns +/zero/-
 *
 * Return Negative/positive/zero
 */
int main(void)
{ 
	int n; //Random number

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
