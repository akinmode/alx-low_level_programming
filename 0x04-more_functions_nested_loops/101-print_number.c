#include <stdio.h>
#include "main.h"

/**
* print_number - print a value
* @n: input value
* Desccription: prints all the alphabets in lower case
* Return: string value
*/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
