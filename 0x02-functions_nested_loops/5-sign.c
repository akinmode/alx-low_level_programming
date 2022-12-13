#include <stdlib.h>
#include "main.h"

/**
* print_sign - print a value
* @n: input parameter
* Description: prints all the alphabets in lower case
* Return: string value
*/

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	return (0);
}
