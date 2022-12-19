#include <stdio.h>
#include "main.h"

/**
* swap_int - Resetting a value
* @a: parameter 1
* @b: parameter 2
* Return: a value
*/

void swap_int(int *a, int *b)
{
	int placeholder;

	placeholder = *a;
	*a = *b;
	*b = placeholder;
}
