#include <stdio.h>
#include "main.h"

/**
* _atoi - Resetting a value
* @s: parameter
* Return: a value
*/

int _atoi(char *s)
{
	int i, np = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 48 && s[i] <= 57)
		{
			np++;
		}
	}
	return (np);
}
