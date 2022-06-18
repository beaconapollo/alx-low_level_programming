#include <stdio.h>
/**
 * main - This print all multiples of 5 and 3 of 1024
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	long int x = 1, y = 2, z;

	while (i < 98)
	{
		z = x + y;
		x = y;
		y = z;
		if (i < 97)
			printf("%lu, ", x);
		else
			printf("%lu", x);
		i++;
	}
	return (0);
}
