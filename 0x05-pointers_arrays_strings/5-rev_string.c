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
	int i = 0, j = 0;
	char *p;

	p = s;
	while (*(s + i) != '\0')
	{
		*(p + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(p + j);
		i--;
		j++;
	}
}
