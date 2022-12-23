#include <stdio.h>
#include "main.h"

/**
* print_number - Replace elements of an array
* @n: input integer
* Return: Return an array
*/

void print_number(int n)
{
	unsigned int u, i;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	else
	{
		u = n;
	}

	i = 1000000000;

	do {
		if (i <= u || i == 1)
			_putchar(u / i % 10 + '0');
		i /= 10;
	} while (i != 0);
}
