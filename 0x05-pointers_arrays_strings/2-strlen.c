#include "main.h"

/**
 * _strlen - entry point
 *
 * Description: returns the length of a string
 * @s: parameter that points to address
 * Return: length of a string
 */

int _strlen(char *s)
{
	int len = 0;
	char *p;

	p = s;
	while (*p != '\0')
	{
		len++;
		p++;
	}
	return (len);
}
