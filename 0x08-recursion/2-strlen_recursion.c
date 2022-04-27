#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - prints a string followed by a new line
 * @s: string to print
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	if (*s == '\0')
	{
		return;
	}
	else
	{
		return(1 + _strlen_recursion(s + 1));
	}
}
