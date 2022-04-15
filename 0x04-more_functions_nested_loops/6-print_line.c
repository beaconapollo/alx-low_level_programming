#include "main.h"

/**
 * more_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return: void
 */

void print_line(int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
