#include <stdlib.h>
#include "main.h"

/**
* print_last_digit - print a value
* @n: input parameter
* Description: prints all the alphabets in lower case
* Return: string value
*/

int print_last_digit(int n)
{
	int last_digit;

	if ((n % 10) < 0)
	{
		last_digit = (n % 10) * -1;
	}
	else
	{
		last_digit = n % 10;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
