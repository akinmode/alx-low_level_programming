#include <stdlib.h>
#include "main.h"

/**
* print_most_numbers - print a value
* Desccription: prints all the numbers
* Return: string value
*/

void print_most_numbers(void)
{
	char numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		if (numbers != '2' && numbers != '4')
		{
			_putchar(numbers);
		}
	}
	_putchar('\n');
}
