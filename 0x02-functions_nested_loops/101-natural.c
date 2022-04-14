#include <stdio.h>
/**
 * main - computes the sum
 * @n:stores sum of
 * Return: 0
 */
int main(void)
{
	int n = 0, i;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			n += i;
		}
	}
	printf("%d\n", n);
	return (0);
}
