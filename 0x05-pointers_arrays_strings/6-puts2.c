#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0, len = 0;

	while (*str != '\0')
	{
		 len++;
	}
	while (*(str + i) != '\0' && i < len)
	{
		printf("%c", *(str + i));
		i += 2;
	}
	printf("\n");
}
