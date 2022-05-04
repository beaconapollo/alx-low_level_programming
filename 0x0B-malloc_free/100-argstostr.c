#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments.
 * @ac: number of arguments
 * @av: array of commands
 * Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *s

	if (ac == 0 || av == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < ac; i++)
		{
			s[i] = av[i];
		}
		s[i + 1] = '\0';
	}
	return (s);
}
