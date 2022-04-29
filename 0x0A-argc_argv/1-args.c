#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++);
		printf("%d\n", i - 1)
	}
	else
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
