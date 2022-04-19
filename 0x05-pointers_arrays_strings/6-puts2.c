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

	while (*(str + i))
	{
		printf("%c", *(str + i));
		i = i + 2;
	}
	printf("\n");
}
