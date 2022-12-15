#include <stdio.h>
#include "main.h"

/**
* print_numbers - print a value
* Desccription: prints all the numbers
* Return: string value
*/

void print_numbers(void)
{
	char numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
		_putchar(numbers);
	_putchar('\n');
}
