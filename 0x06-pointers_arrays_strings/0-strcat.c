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
	char *str1 = dest;
	char *str2 = src;

	while (*str1 != '\0')
	{
		str1++;
	}
	while (*str2 != '\0')
	{
		*str1 = *str2;
		str2++;
		str1++;
	}
	*str1 = '\0';
	return (str1);
}
