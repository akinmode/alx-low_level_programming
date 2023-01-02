#include <stdio.h>
#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: input pointer
* @accept: input character
* Return: return the span of the acccepted prefix
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, span = 0;

	while (accept[i])
	{
		j = 0;

		/* Exclude SpaceBar */
		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				span++;
			}
			j++;
		}
		i++;
	}

	return (span);
}
