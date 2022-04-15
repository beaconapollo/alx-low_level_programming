#include "main.h"

/**
 *  print_diagonal - entry point
 *
 * Description: Prints lines
 * @n: number of times the characte \ printed
 * Return: void
 */

void print_digonal(int n)
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
			_putchar(' ');
		}
		_putchar('\');
		_putchar('\n');
	}
}
