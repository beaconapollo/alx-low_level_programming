#include "main.h"
/**
 * print_to_98 - prints numbers n to 98
 * 
 * @n: number to test
 * Return: nothing
 *
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			n--;
		}
	}
	else (n < 98)
	{
		while (n < 98)
		{
			printf("%d", n);
			n++;
		}
	}
}
