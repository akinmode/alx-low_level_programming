#include <stdio.h>
#include "main.h"

/**
* print_diagsums - prints the chessboard.
* @a: input pointer
* @size: limiter
* Return: return an array of characters
*/

void print_diagsums(int *a, int size)
{
	int i, ltor = 0, rtol = 0;

	for (i = 0; i < size; i++)
	{
		ltor += a[(size + 1) * i];
		rtol += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", ltor, rtol);
}
