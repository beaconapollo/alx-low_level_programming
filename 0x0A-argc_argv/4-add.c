#include <stdio.h>
/**
 * main - prints the sum of numerical arguments.
 * @argc: argument count or size of arguments.
 * @argv: argument vector
 *
 * Return: 1 if argument is not digit otherwise 0.
 */
int main(int argc, char **argv)
{
	int sum = 0, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if(argv[i] >= '0' && argv[i] <= '9')
			{
				sum += argv[i];
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	else
	{
		sum = 0;
	}
	printf("%i", sum);
	return (0);
}
