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
	int a, b;

	if(argc == 3)
	{
		a = _atoi(*(argv + 1));
		b = _atoi(*(argv + 2));
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
