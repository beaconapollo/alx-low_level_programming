#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string to stdout
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, len = 0;
	char *p;

	p = str;
	while (*p)
	{
		len++;
		p++;
	}
	i = len/2;
	while (*(str + i))
	{
		if (i < len)
		{
			printf("%c", *(str + i));
		}
		i++;
	}
	printf("\n");
}
