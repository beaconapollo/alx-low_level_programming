#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{
	char c[] = "_putchar";

	for (int i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}	
	_putchar('\n');
	return (0);
}
