#include "main.h"
#include <stdio.h>
/**
 * prime_check - checks to see if prime number
 * @i: factor check
 * @p: possible prime number
 *
 * Return: 1 if prime
 */
int prime_check(int p, int i)
{
	if (i == 1)
		return (1);
	else if (p % i == 0)
		return (0);
	else
		return (prime_check(p, i - 1));
}
/**
 * is_prime_number - prints 1 a prime number
 * @x: base number
 * @y: exponent
 *
 * Return: x power of y
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(n, 2));
}
