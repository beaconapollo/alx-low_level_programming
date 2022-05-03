#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strdup - returns a pointer to a new string which is a duplicate of string str
 * @str: input string
 * Return: pointer of thestring
 */
char *_strdup(char *str)
{
	int i = 0, size;
	char *s;

	while (*(str + i))
	{
		i++;
	}
	size = i + 1;
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
