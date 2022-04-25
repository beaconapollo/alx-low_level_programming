#include "main.h"
/*
 *_memset - function fills n bytes
 */
char *_memtest(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
