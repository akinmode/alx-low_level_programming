#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - function that returns the sum of all its parameters.
* @separator: character delimiter
* @n: number of args
* Return: sum
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	if (separator == NULL || *separator == 0)
		separator = "";

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			i + 1 == n ? printf("%d", va_arg(args, int)) : printf("%d%s", va_arg(args, int), separator);
		}
	}
	printf("\n");
	va_end(args);
}
