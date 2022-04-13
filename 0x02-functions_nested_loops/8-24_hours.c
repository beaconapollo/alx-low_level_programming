#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number to test
 * Return: last digit of n
 *
 */
void jack_bauer()
{
	char h1, h0, m1, m0;

	for (h1 = '0'; h1 <= '9'; h1++)
	{
		for (h0 = '0'; h0 <= '9'; h0++)
		{
			for (m1 = '0'; m1 <= '5'; m1++)
			{
				for (m0 = '0'; m0 <= '9'; m0++)
				{
					_putchar(h1);
					_putchar(h0);
					_putchar(':');
					_putchar('m1');
					_putchar('m0');
					_putchar('\n');
				}
			}
		}
	}
}
