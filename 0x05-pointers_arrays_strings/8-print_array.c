#include <stdio.h>
#include "main.h"

/**
* print_array - Resetting a value
* @a: parameter
* @n: parameter
* Return: a value
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		i > 0 ? printf(", %d", a[i]) : printf("%d", a[i]);
	}
	putchar('\n');
}
