#include <stdio.h>
#include "main.h"

/**
* puts2 - Resetting a value
* @str: parameter
* Return: a value
*/

void puts2(char *str)
{
	for (; *str != '\0'; str += 2)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
