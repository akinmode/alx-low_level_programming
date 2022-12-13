#include <stdio.h>

/**
* print_sign - print a value
* @c: input parameter
* Description: prints all the alphabets in lower case
* Return: string value
*/

int print_sign(int n)
{
	if (n < 0)
	{
		putchar(45);
		return (-1);
	}
	else if (n == 0)
	{
		putchar(48);
		return (0);
	}
	else if (n > 0)
	{
		putchar(43);
		return (1);
	}
	return (0);
}
