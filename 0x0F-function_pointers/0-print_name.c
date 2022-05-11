#include "main.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: astring to print
 * @f: function that recieves a string
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	(*f)(name);
}
