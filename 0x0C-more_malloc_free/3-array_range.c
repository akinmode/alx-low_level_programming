#include <stdlib.h>

/**
* array_range - creates an array of integers.
* @min: array pointer
* @max: array size
* Return: array pointer
*/

int *array_range(int min, int max)
{
	int *nwarray, *ptr, diff;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		diff = (max - min) + 1;

		nwarray = malloc(sizeof(int) * diff);
		if (!nwarray)
			return (NULL);

		ptr = nwarray;
		while (diff--)
			*ptr++ = max - diff;
	}
	return (nwarray);
}
