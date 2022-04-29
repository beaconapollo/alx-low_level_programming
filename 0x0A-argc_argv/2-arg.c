#include <stdio.h>
/**
 * main - Prints arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; *argv; i++, argv++)
	{
		printf("%c\n", argv[i]);
	}

	return (0);
}
