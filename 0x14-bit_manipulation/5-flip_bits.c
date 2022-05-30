#include "main.h"

/**
 * flip_bits - returns the number of bits to be flipped between two numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of bits that needs to flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int f = 0;

	if (n > m)
	{
		while (n > 0)
		{
			if ((n & 1) != (m & 1))
				f++;
			n >>= 1;
			m >>= 1;
		}
	}
	else if (n < m)
	{
		while (m > 0)
                {
                        if ((n & 1) != (m & 1))
                                f++;
                        n >>= 1;
                        m >>= 1;
                }
	}
	return (f);
}
