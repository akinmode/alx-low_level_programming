#include <stdio.h>
#include "main.h"

/**
* _strcmp - Concatenate two strings
* @s1: parameter one
* @s2: parameter two
* Return: a combined string
*/

int _strcmp(char *s1, char *s2)
{
	int str1 = 0, str2 = 0, strpos = 0, cmp = 0, str_diff;

	while (s1[str1])
	{
		str1++;
	}
	while (s2[str2])
	{
		str2++;
	}

	str_diff = str1 <= str2 ? str1 : str2;

	while (strpos <= str_diff)
	{
		if (s1[strpos] == s2[strpos])
		{
			strpos++;
			continue;
		}
		else
		{
			cmp = s1[strpos] - s2[strpos];
			break;
		}

		strpos++;
	}

	return (cmp);
}
