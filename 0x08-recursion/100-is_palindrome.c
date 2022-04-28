#include "main.h"
#include <stdio.h>
/**
 * isPalindrome - checks if a string palindrome
 * @str: a string to be checked
 * @ai: first index of a string
 * @zi: last index of a string
 *
 * Return: 1 if a string is a palindrome
 */
int isPalindrome(char *str, int ai, int zi)
{
	if (str[ai] != str[zi])
	{
		return (0);
	}
	else if (ai == zi && str[ai] == str[zi])
	{
		return (1);
	}
	else if (ai == zi - 1 && str[ai] == str[zi])
	{
		return (1);
	}
	else
	{
		return (isPalindrome(str, ai + 1, zi - 1));
	}
}
/**
 * is_palindrome - prints 1 a palindrome string 
 * @s: a string to be checked
 *
 * Return: 1 if palindrome
 */
int is_palindrome(char *s)
{
	int lIndex = 0;
	int len = 0;
	char *p;
	p = s;

	while (*p)
	{
		len++;
		p++;
	}
	if (len == 0 || len == 1)
		return (1);
	else
		return (isPalindrome(s, lIndex, len - 1));
}
