#include "search_algos.h"
#include <math.h>

size_t min(size_t a, size_t b);

/**
 * jump_search - a function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: Value index in array or -1
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i, step, prev;

	step = sqrt(size);
	prev = 0;

	if (size || array != NULL)
	{
		while (array[min(step, size) - 1] < value)
		{
			prev = step;
			step += sqrt(size);

			printf("Value checked array[%lu] = [%d]\n",
				min(step, size) - 1, array[min(step, size) - 1]);
			if (prev >= size)
				return (-1);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
			prev, min(step, size) - 1);
		for (i = prev; i < min(step, size); i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}

/**
 * min - a function to return the minimum of two size_t values
 * @a: first value
 * @b: second value
 * Return: the minimum of a and b
 */
size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}
