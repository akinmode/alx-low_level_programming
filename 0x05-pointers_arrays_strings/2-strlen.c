#include <stdio.h>
#include "main.h"

/**
* _strlen - Resetting a value
* @s: parameter
* Return: a value
*/

int _strlen(char *s)
{
	int count = 0;

	for (; *s != '\0'; s++)
	{
		count++;
	}
	return (count);
}
