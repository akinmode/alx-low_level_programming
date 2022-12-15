#include <stdio.h>
#include "main.h"

/**
* print_square - print a value
* @size: input value
* Desccription: prints all the alphabets in lower case
* Return: string value
*/

void print_square(int size)
{
	int i, p;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (p = 0; p < size; p++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
