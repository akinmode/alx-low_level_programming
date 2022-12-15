#include <stdio.h>
#include "main.h"

/**
* more_numbers - print a value
* Desccription: prints all the alphabets in lower case
* Return: string value
*/

void more_numbers(void)
{
	int i = 1;

	for (i = 1; i <= 10; i++)
	{
		int numbers;

		for (numbers = 0; numbers <= 14; numbers++)
		{
			_putchar((numbers / 10) + '0');
			_putchar((numbers % 10) + '0');
		}
		_putchar('\n');
	}
}
