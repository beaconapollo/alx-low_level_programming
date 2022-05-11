#include "main.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: name of a string
 * @f: function
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