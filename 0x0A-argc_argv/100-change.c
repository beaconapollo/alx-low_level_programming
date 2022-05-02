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
	int cents[4] = {25, 10, 5, 2};
	int i, money, coins = 0;

	money = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (money <= 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 4; i++)
		{
			if (money >= cents[i])
			{
				coins += money / cents[i];
				money %= cents[i];
			}
		}
		coins += money;
		printf("%i", coins);
	}
	return (0);
}
