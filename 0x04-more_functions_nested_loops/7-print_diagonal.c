#include <stdio.h>
#include "main.h"

/**
* print_diagonal - print a value
* @n: input value
* Desccription: prints all the alphabets in lower case
* Return: string value
*/

void print_diagonal(int n)
{
	int i, p;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (p = 0; p < i; p++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
