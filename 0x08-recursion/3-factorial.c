#include <stdio.h>
#include "main.h"

/**
* factorial - the factorial of a given number.
* @n: input string
* Return: a factorial
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
