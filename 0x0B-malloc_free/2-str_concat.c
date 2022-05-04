#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer of the concatnated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, size1, size2;
	char *s;

	i = 0;
	while (*(s1 + i))
	{
		i++;
	}
	size1 = i + 1;
	i = 0;
	while (*(s2 + i))
	{
		i++;
	}
	size2 = i + 1;
	s = (char *)malloc((size1 + size2) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size1; i++)
		{
			s[i] = s1[i];
		}
		for (i = 0; i < size2; i++)
		{
			s[size1 + i] = s2[i];
		}
		s[size1 + i + 1] = '\0';
	}
	return (s);
}
