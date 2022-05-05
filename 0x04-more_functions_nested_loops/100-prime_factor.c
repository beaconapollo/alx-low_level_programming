#include <stdio.h>
#include "main.h"
/**
 * isPrime - analise if a number is prime or not
 * @n: number to check
 * Return: true if it is prime false if not
 */
int isPrime(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				return (0);
			}
		}
		return (1);
	}
}
/**
 * biggestFactor - returns the biggest prime factor of a number
 * @a: number to check
 * Return: biggest factor
 */
long int biggestFactor(long int n)
{
	long int i = 2, factor;

	factor = n;
	for (i = 2; i <= factor; i++)
	{
		if (isPrime(factor) == 1)
		{
			break;
		}
		else
		{
			if ((factor % i == 0) && (isPrime(i) == 1))
			{
				factor = factor / i;
				continue;
			}
			else
			{
				factor = factor;
			}
		}
	}
	return (factor);
}
/*
 * main - prints the biggest prime factor of a number.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int num;

	num = 1231952;
	if (isPrime(num) == 1)
	{
		printf("%ld\n", num);
	}
	else
	{
		printf("%ld\n", biggestFactor(num));
	}
	return (0);
}
