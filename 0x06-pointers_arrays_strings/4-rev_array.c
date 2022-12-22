#include <stdio.h>
#include "main.h"

/**
* reverse_array - Reverse an array
* @a: input array
* @n: the number of elements to swap
* Return: Return an array
*/

void reverse_array(int *a, int n)
{
	int *p, i, temp, k;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}

	for (k = 0; k < i / 2; k++)
	{
		temp = a[k];
		a[k] = *p;
		*p = temp;
		p--;
	}
}
