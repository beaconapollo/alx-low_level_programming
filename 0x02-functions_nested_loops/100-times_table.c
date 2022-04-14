#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the less than 15 times table
 * @n, m: number to test
 * Return: Nothing
 *
 */
void print_times_table(int n)
{
	int i, j, r;

	if (n <= 15 && n >=0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				r = i * j;
				printf("%d, ", r);
			}
		}
	}
}
