#include "main.h"
/**
 * times_table - prints the 9 times table
 * @n, m: number to test
 * Return: Nothing
 *
 */
void times_table(void)
{
	int n, m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			_putchar((n * m) + '0');
			if(m != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('$');
		_putchar('\n');
	}
}
