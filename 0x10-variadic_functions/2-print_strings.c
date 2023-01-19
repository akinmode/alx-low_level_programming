#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - function that prints strings, followed by a new line.
* @separator: character delimiter
* @n: number of args
* Return: string
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *temp;

	va_start(args, n);

	if (separator == NULL || *separator == 0)
		separator = "";

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			temp = va_arg(args, char *);
			i + 1 == n ? printf("%s", temp) : printf("%s%s", temp, separator);
		}
	}
	printf("\n");
	va_end(args);
}
