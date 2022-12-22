#include <stdio.h>
#include "main.h"

/**
* leet - Replace elements of an array
* @str: input string
* Return: Return an array
*/

char *leet(char *str)
{
	int i = 0, pos = 0;
	char real[5] = {'A', 'E', 'O', 'T', 'L'};
	char enc[5] = {'4', '3', '0', '7', '1'};

	while (str[i])
	{
		pos = 0;

		while (pos < 5)
		{
			if (str[i] == real[pos] || str[i] - 32 == real[pos])
			{
				str[i] = enc[pos];
			}
			pos++;
		}
		i++;
	}

	return (str);
}
