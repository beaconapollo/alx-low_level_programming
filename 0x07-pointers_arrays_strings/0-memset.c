#include "main.h"
/*
 * _memset - function fills n bytes with a constant byte
 * @s: memory space to be filled
 * @b: constant byte to fill with
 * @n: number of spaces  provided
 *
 * Return: pointer to memory space s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
