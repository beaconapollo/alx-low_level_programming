#include "main.h"

/**
 * more_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 * @n: number of lines
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
