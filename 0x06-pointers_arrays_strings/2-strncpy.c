#include <stdio.h>
#include "main.h"

/**
* _strncpy - Concatenate two strings
* @dest: string one
* @src: string two
* @n: number of bytes to be copied from the source
* Return: a combined string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int str1 = 0, str2 = 0;

	while (src[str2])
	{
		str2++;
	}

	while (str1 < n && src[str1])
	{
		dest[str1] = src[str1];
		str1++;
	}

	while (str1 < n)
	{
		dest[str1] = '\0';
		str1++;
	}

	return (dest);
}
