#include <stdio.h>
#include "main.h"

/**
* _puts - Resetting a value
* @str: parameter
* Return: a value
*/

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
