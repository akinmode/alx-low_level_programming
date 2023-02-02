#include <stdio.h>
#include "main.h"

/**
* print_binary - function that prints the binary representation of a number.
* @n: integer input
* Return: binary
*/

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else
	{
		_divquo(n);
	}
}

/**
* _divquo - recursively right shift the base
* along the given integer
* @n: integer input
* Return: binary
*/

void _divquo(unsigned long int n)
{
	if (n < 1)
		return;

	_divquo(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
