#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints multiplication of arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array of arguments
 *
 * Return: 1 if arguments <> 3 else 0
 */
int main(int argc, char *argv[])
{
	int a, b;

	if(argc < 3 || argc > 3)
	{
		printf("Error\n");
                return (1);
	}
	else
	{
                a = atoi(argv[1]);
                b = atoi(argv[2]);
                printf("%d\n", a * b);
        }
	return (0);
}
