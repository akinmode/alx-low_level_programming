#include <stdio.h>
#include "main.h"

/**
* _memcpy - copies memory with a constant byte
* @dest: input pointer
* @src: input filler/character
* @n: limit
* Return: return a filled variable
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
