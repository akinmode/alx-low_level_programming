#include <stdio.h>
#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: input pointer
* @accept: input character
* Return: return a first occurence
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j, strcount = 0;

	while (s[strcount])
	{
		strcount++;
	}

	for (i = 0; i <= strcount; i++)
	{
		j = 0;

		/* Exclude SpaceBar */
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}
			j++;
		}
	}
	return ('\0');
}
