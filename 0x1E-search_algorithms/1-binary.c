#include "search_algos.h"

void print_array(const int *array, size_t start, size_t end);

/**
 * binary_search - a function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: Value index in array or -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t n, nstart, nstop;

	nstart = 0;
	nstop = size - 1;

	if (size)
	{
		while (nstart <= nstop)
		{
			n = nstart + (nstop - nstart) / 2;

			printf("Searching in array: ");
			print_array(array, nstart, nstop);
			if (value == array[n])
				return (n);
			else if (value < array[n])
				nstop = n - 1;
			else
				nstart = n + 1;
		}
	}
	return (-1);
}

/**
 * print_array - a helper function to print the array elements
 * @array: pointer to the first element of the array to print
 * @start: starting index of the portion of the array to print
 * @end: ending index of the portion of the array to print
 */
void print_array(const int *array, size_t start, size_t end)
{
	size_t i;

	for (i = start; i <= end; i++)
	{
		if (i > start)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}
