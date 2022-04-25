#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: a string to locate a character on
 * @c: a character to locate on a string
 * 
 * Return: the first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	int i;
	
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return (0);
}
