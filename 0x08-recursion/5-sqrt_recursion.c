#include <stdio.h>
#include "main.h"


int check_natural_sqroot(int n, int i);

/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: input
* Return: a rooted number
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (check_natural_sqroot(n, 0));
}


/**
* check_natural_sqroot - checks if the input is a natural square
* @n: input
* @i: incremental
* Return: return natural square or not
*/

int check_natural_sqroot(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (check_natural_sqroot(n, i + 1));
}
