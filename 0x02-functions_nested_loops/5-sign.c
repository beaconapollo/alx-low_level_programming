#include "main.h"
/**
 * _isalpha - tests whether a character is letter
 * @c: character to test
 * Return: 1 if it is a letter otherwise 0
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
