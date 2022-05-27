#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number otherwise 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int p, i = 0, d = 0, len = 0, t = 1;

	if (b == NULL)
		return (0);
	while (*(b + len))
	{
		len++;
	}
	while (*(b + i))
	{
		if (*(b + i) != '1' && *(b + i) != '0')
		{
			return (0);
		}
		if (*(b + i) == '1')
		{
			p = len - i - 1;
			while (p)
			{
				t *= 2;
				p--;
			}
			d += t;
			t = 1;
		}
		i++;
	}
	return (d);
}
