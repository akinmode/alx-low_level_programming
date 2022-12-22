#include <stdio.h>
#include "main.h"

/**
* string_toupper - Reverse an array
* @str: input string in lowercase
* Return: Return an array
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		str[i] = (str[i] >= 97 && str[i] <= 122) ? str[i] - 32 : str[i];
		i++;
	}

	return (str);
}
