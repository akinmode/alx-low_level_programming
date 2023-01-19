#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - function that returns the sum of all its parameters.
* @n: number of args
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int res = 0, i;

	va_start(args, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			res += va_arg(args, int);
		}
		return (res);
	}
	va_end(args);
	return (0);
}
