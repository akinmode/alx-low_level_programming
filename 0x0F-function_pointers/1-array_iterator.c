#include <stdio.h>

/**
* array_iterator - function that executes a function
* given as a parameter on each element of an array
* @array: array to act on
* @size: size of array
* @action: function to execute on array
* Return: 0
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
