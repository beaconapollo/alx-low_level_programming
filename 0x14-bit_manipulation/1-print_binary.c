#include <stdio.h>
#include "main.h"
/**
 * print_binary - converts a number to binary
 * @n: a decimal number to be converted
 * Return: the binary number otherwise 0
 */
void print_binary(unsigned long int n)
{
	char *b = " ";
	int i = 0;
	while (n > 0)
	{
		*(b + i) = ((n && 1) == 0 ? '0' : '1');
		n >>= 1;
		i++;
	}
	printf("%d", i);
}
