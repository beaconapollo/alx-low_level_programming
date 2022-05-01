#include "main.h"
#include <stdio.h>
#include <stdib.h>
/**
 * main - prints multiplication of arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array of arguments
 * Return: 1 if arguments <> 3 else 0
 */

int main(int argc, char **argv)
{
	int a, b;

	if(argc == 3)
	{
		a = atoi(*(argv + 1));
		b = atoi(*(argv + 2));
		printf("%i\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
