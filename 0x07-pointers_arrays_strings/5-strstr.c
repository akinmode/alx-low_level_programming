#include <stdio.h>
#include "main.h"

/**
* _strstr - locates a substring.
* @haystack: input pointer
* @needle: input character
* Return: return a first occurence
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j, hcount = 0, ncount = 0;

	while (haystack[hcount] != '\0')
	{
		hcount++;
	}
	while (needle[ncount] != '\0')
	{
		ncount++;
	}

	for (i = 0; i <= hcount; i++)
	{
		for (j = 0; j <= ncount; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			else
			{
				haystack += i;
				return (haystack);
			}
		}
	}
	return ('\0');
}
