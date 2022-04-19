#include "main.h"
/**
 * rev_string - entry point
 *
 * Description: reverses a string
 * @s: parameter that points to address of a string
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0, len = 0, j = 0;
	char *p;

	p = s;
	while (*p != '\0')
	{
		len++;
		p++;
	}
	i = len - 1;
	while (i >= 0 && j < len)
	{
		*(s + i) = *(p + j);
		i--;
		j++;
	}
}
