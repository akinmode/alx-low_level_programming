#include <stdio.h>
#include "main.h"

/**
* puts2 - Resetting a value
* @str: parameter
* Return: a value
*/

void puts2(char *str)
{
	int i, s_count = 0;

	for (; *str != '\0'; str++)
	{
		s_count++;
	}

	for (i = 0; i < s_count; i+=2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
