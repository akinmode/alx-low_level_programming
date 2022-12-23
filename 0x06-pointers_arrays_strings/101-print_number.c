#include <stdio.h>
#include "main.h"

/**
* print_number - Replace elements of an array
* @n: input integer
* Return: Return an array
*/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '\0');
}
