#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
			if(isdigit(argv[i]))
			{
				sum += atoi(*(argv + i));
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%i", sum);
	return (0);
}
