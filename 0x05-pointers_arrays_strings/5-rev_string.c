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

	if (*s != '\0')
	{
		p = s;
		while (*p != '\0')
		{
			i = counter;
			len++;
			p++;
		}
		while (i >= 0 && j < len)
		{
			*(p + j) = *(s + i);
			i--;
			j++;
		}
		s = p;
	}
}
