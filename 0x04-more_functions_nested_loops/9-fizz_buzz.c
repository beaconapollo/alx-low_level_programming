#include "main.h"
#include <stdio.h>

/**
 * print_Fizz-Buzz - entry point
 *
 * Description: Prints lines
 * Return: void
 */

void print_Fizz-Buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			if (i != 100)
			{
				printf(" ");
			}
		}
		else
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
	                        if (i != 100)
        	                {
                	                printf(" ");
                        	}
			}
			else if (i % 5 == 0)
			{
				printf("Buzz");
                	        if (i != 100)
        	                {
	                                printf(" ");
                        	}
			}
			else
			{
				printf("%d", i);
	                        if (i != 100)
        	                {
                	                printf(" ");
                        	}
			}
		}
	}
}
