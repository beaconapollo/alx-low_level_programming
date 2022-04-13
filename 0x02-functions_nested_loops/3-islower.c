#include "main.h"
/**
 * _islower - prints 1 if a character is lowercase otherwise 0
 *
 * Return: Nothing.
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
