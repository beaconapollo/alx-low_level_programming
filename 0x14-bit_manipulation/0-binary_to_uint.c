#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int d;
	unsigned int len = 0;

	if (b == NULL)
		return (0);
	while (*(b + len))
	{
		len++;
	}
	while (*(b + i))
	{
		if (*(b + i) == '1')
		{
			d = d + 2^(len + i - 1);
		}
	}
	return (d);
}
