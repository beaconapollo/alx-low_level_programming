#include <stdio.h>
/**
 * main - computes the sum 
 * @sum:stores sum of 
 * Return: 0
 */
int main(void)
{
	int sum = 0, i;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
