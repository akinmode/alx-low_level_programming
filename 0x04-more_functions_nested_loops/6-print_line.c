#include <stdio.h>
#include "main.h"

/**
* print_line - print a value
* @n: input value
* Desccription: prints all the alphabets in lower case
* Return: string value
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
