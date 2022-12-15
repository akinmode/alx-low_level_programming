#include <stdio.h>
#include "main.h"

/**
* print_triangle - print a value
* @size: input value
* Desccription: prints all the alphabets in lower case
* Return: string value
*/

void print_triangle(int size)
{
	int i, s, p;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (s = size - i; s > 1; s--)
			{
				_putchar(32);
			}
			for (p = 0; p <= i; p++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
