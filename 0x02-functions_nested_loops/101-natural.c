#include <stdio.h> 
/**
 * natural - computes the absolute value of an integer
 * @n: number to test
 * Return: absolute value of n
 *
 */
void natural()
{
	int sum = 0, i;

	for (i = 1; i < 1024; i++)
	{
		if(i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
}
