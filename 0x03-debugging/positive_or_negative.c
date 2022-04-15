#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Check a number is positive, zero or negative
 *
 * Return: Always 0 (Success/Correct)
 *
 */
int positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
