#include <stdio.h>
#include "main.h"

/**
* flip_bits - function that returns the number of bits
* you would need to flip to get from one number to another.
* @n: integer input
* @m: given index to return
* Return: flipping distance
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bdist = n ^ m;
	unsigned int i = 0;

	while (bdist)
	{
		if (bdist & 1ul)
			i++;
		bdist = bdist >> 1;
	}
	return (i);
}
