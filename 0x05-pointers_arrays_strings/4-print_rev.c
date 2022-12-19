#include <stdio.h>
#include "main.h"

/**
* print_rev - Resetting a value
* @str: parameter
* Return: a value
*/

int string_count(char *s);

void print_rev(char *s)
{
	int i;

	for (i = string_count(s); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

/**
* string_count - Resetting a value
* @s: parameter
* Return: a value
*/

int string_count(char *s)
{
	int count = 0;

	for (; *s != '\0'; s++)
	{
		count++;
	}
	return (count);
}
