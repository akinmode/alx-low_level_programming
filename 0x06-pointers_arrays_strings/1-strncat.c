#include <stdio.h>
#include "main.h"

/**
* _strncat - Concatenate two strings
* @dest: string one
* @src : string two
* Return: a combined string
*/

char *_strncat(char *dest, char *src, int n)
{
	char *str1 = dest;
	char *str2 = src;
	int i = 0, src_count = 0;

	for (; *str2 != '\0'; str2++)
	{
		src_count++;
	}
	while (*str1 != '\0')
	{
		str1++;
	}
	if (n < src_count + 1)
	{
		while (*str2 != '\n' && i < n)
		{
			*str1 = *str2;
			str2++;
			str1++;
			i++;
		}
	}
	else
	{
		while (*str2 != '\0')
		{
			*str1 = *str2;
			str2++;
			str1++;
		}
	}
	*str1 = '\0';
	return (dest);
}
