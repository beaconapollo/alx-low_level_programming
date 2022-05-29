#include "main.h"
/**
 * get_bit - the value of a bit at a given index
 * @n: the number
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index > 63)
		return (-1);
	while (i <= index)
	{
		n >>= 1;
		i++;
	}
	return (n & 1);
}
