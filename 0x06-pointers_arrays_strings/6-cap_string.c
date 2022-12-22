#include <stdio.h>
#include "main.h"

/**
* cap_string - Reverse an array
* @str: input string in lowercase
* Return: Return an array
*/

char *cap_string(char *str)
{
	int a = 0, i;
	int c_return = 13;
	char specialc[] = {32, 44, 46, 58, 59,
				'\t', '\n', '!', '?', '"', '(', ')', '{', '}'};

	while (str[a])
	{
		i = 0;

		while (i < c_return)
		{
			str[a] =  ((a == 0 || str[a - 1] == specialc[i]) &&
				(str[a] >= 97 && str[a] <= 122)) ? str[a] - 32 : str[a];
			i++;
		}

		a++;
	}

	return (str);
}
