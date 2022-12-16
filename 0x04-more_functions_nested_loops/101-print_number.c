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
	unsigned int x;
	if (n < 0)
	{
		_putchar('-');
	}
	x /= 10;
	if (n != 0)
		print_number(n);
	_putchar((unsigned int) n % 10 + '0');
}
