#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc.
* @b: size
* Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	void *memck;

	memck = malloc(b);
	if (!memck)
		exit(98);
	return (memck);
}
