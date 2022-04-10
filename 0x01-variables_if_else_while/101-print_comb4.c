#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 *
 */
int main(void)
{
	int ch2;
	int ch1;
	int ch0;

	for (ch2 = '0'; ch2 <= '9'; ch2++)
	{
		for (ch1 = '0'; ch1 <= '9'; ch1++)
		{
			for (ch0 = '0'; ch0 <= '9'; ch0++)
			{

				if (ch2 != ch1 && ch2 != ch0 && ch1 != ch0)
				{
					if(ch2 < ch1 && ch2 < ch1  && ch1 < ch0)
					{
						putchar(ch2);
						putchar(ch1);
						putchar(ch0);
						if (ch2 == '7' && ch1 == '8' && ch0 == '9')
						{
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
