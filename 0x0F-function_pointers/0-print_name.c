#include "function_pointers.h"
/**
 * print_name- this functions prints a name
 * @name: string to print.
 * @f: a function pointer that recieves a string.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		(*f)(name);
	}
}
