#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number to set
 * @index: the index in the number
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*(n + index) = 1;
	return (1);
}
