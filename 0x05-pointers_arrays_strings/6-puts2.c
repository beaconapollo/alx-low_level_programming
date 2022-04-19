#include "main.h"
#include <stdio.h>
/**
 * puts2 - entry mode
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		printf("%c", *(str + i));
		i = i + 2;
	}
}
