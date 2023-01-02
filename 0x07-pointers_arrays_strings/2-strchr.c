#include <stdio.h>
#include "main.h"

/**
* _strchr - locates a character in a string
* @s: input pointer
* @c: input character
* Return: return a first occurence
*/

char *_strchr(char *s, char c)
{
	int i, strcount = 0;

	while (s[strcount])
	{
		strcount++;
	}

	for (i = 0; i <= strcount; i++)
	{
		if (s[i] == c)
		{
			s += i;
			return (s);
		}
	}
	return ('\0');
}
