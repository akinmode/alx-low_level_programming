#include <stdio.h>
#include "main.h"

/**
* _strncat - Concatenate two strings
* @dest: string one
* @src: string two
* @n: number of bytes to be copied from the source
* Return: a combined string
*/

char *_strncat(char *dest, char *src, int n)
{
	char *str1 = dest;

<<<<<<< HEAD
	while (*str1 != 0)
=======
	while (*str1 != '\0')
>>>>>>> d8c701982f3412433bb12ce12f7696f33a7882b3
		str1++;
	while (n-- > 0)
		*str1++ = *src++;
	*str1 = '\0';

	return (dest);
}
