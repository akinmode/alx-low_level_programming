#include <stdio.h>
#include "main.h"

/**
* puts_half - Resetting a value
* @str: parameter
* Return: a value
*/

void puts_half(char *str)
{
	int mid, s_count;

	for (; *str != '\0'; str++)
	{
		s_count++;
	}

	mid = s_count % 2 == 1 ? (s_count - 1) / 2 : s_count / 2;

	for (; mid < 8; mid++)
	{
		_putchar(str[mid]);
	}
	_putchar('\n');
}
