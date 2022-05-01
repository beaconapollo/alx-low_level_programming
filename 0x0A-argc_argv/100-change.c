#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the minimum number of coins.
 * @argc: argument count or size of arguments.
 * @argv: argument vector
 *
 * Return: 1 for one argument, 0 success
 */
int main(int argc, char **argv)
{
	int cents = 0, money;

	if (argc == 2)
	{
		money = atoi(argv[1]);
		if (money >= 25)
		{
			cents += money / 25;
			money %= 25;
		}
		if (money >= 10)
		{
			cents += money / 10;
			money %= 10;
		}
		if (money >= 5)
		{
			cents += money / 5;
			money %= 5;
		}
		if (money >= 2)
		{
			cents += money / 2;
			money %= 2;
		}
		cents += money;
		printf("%i", cents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
