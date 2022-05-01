#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints multiplication of arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array of arguments
 * Return: 1 if arguments <> 3 else 0
 */
int main(int argc, char *argv[])
{
	int m;

	if(argc == 3)
	{
		m = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", m);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
