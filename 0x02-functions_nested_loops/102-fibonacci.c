#include <stdio.h>
/**
 * main - computes the sum
 * Description: Print the sum of all multiples of 3 or 5 below 1024
 * Return: 0
 */
int main(void)
{
	int n = 0, i = 2, j = 1, t;

	while (n < 50)
	{
		printf("%d", j);
		if (n != 49)
		{
			printf(", ");
		}
		t = i;
		i += j;
		j = t;
		n++;
	}
	return (0);
}
