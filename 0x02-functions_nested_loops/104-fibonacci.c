#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	long int x = 1, y = 2, z;

	while (i < 98)
	{
		if (i < 97)
			printf("%lu, ", x);
		else
			printf("%lu", x);
		z = x + y;
		x = y;
		y = z;
		i++;
	}
	return (0);
}
