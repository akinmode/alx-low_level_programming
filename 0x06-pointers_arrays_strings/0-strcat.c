#include <stdio.h>
#include "main.h"

/**
* _strcat - Concatenate two strings
* @dest: string one
* @src : string two
* Return: a combined string
*/

char *_strcat(char *dest, char *src)
{
	int pos = 0, i;

	while (dest[pos])
	{
		dpos++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[pos] = src[i];
		pos++;
	}

	dest[pos] = '\0';
	return (dest);
}
