#include <stdio.h>
#include "main.h"

int check_natural_prime(int n, int i);

/**
* is_prime_number - returns 1 or otherwise return 0.
* @n: input
* Return: a primed number
*/

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check_natural_prime(n, 2));
}

/**
* check_natural_prime - checks for the primes
* @n: input
* @i: incrememtal
* Return: a prime
*/

int check_natural_prime(int n, int i)
{
	if (i == n)
		return (1);
	if (!(n % i))
		return (0);
	return (check_natural_prime(n, i + 1));
}
