#include "variadic_functions.h"
/**
 * print_numbers - print all numbers.
 * @separator: separator between strings
 * @n: the number of parameters
 * Description: this function prints all the parameters)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *string;
	unsigned int i;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(str, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(str);
	printf("\n");
}