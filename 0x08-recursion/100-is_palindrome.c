#include "main.h"
#include <stdio.h>
/**
 * isPalindrome - checks if a string palindrome
 * @inputString: a string to be checked
 * @leftIndex: first index of a string
 * @rightIndex: last index of a string
 *
 * Return: 1 if a string is a palindrome
 */
int isPalindrome(char *inputString, int leftIndex, int rightIndex)
{
	if (*inputString == '\0' || leftIndex < 0 || rightIndex < 0)
		return (0);
	if (leftIndex >= rightIndex)
		return (1);
	if (inputString[leftIndex] == inputString[rightIndex])
	{
		return (isPalindrome(inputString, leftIndex + 1, rightIndex - 1));
	}
	return (0);
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
	int rIndex = 0;
	char *p;
	p = s;

	while (*p)
	{
		rIndex++;
		p++;
	}
	return (isPalindrome(s, lIndex, rIndex));
}
