#include "main.h"
#include <stdio.h>
/**
 * main - Prints arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, m;

	if(*(argv + 1))
	{
		a = _atoi(*(argv + 1));
		if(*(argv + 2))
		{
			b = _atoi(*(argv + 2));
			m = a * b;
			printf("%i\n", m);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
