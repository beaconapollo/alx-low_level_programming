#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number to test
 * Return: last digit of n
 *
 */
int print_last_digit(int n)
{
	n%=10;
	_putchar(n);
	return (n);
}
