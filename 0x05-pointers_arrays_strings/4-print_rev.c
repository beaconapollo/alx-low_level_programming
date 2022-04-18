#include "main.h"
#include <stdio.h>
/**
 * print_rev - entry point
 *
 * Description: prints a string in reverse
 * @s: parameter that points to address of a string
 * Return: nothing
 */

void print_rev(char *s)
{
	char *p;

	while (*s != '\0')
	{
		p = s;
		s++;
	}
	while (p >= s)
	{
		printf("%c", *p);
		p--;
	}
	printf("\n");
}
