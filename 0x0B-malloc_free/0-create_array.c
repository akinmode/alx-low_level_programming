#include <stdlib.h>

/**
* create_array - creates an array of chars,
* and initializes it with a specific char.
* @size: size of the array
* @c: char to fill into the array
* Return: filled array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *farray;

	if (size == 0)
		return (NULL);
	if (size > 0)
	{
		farray = malloc(sizeof(char) * size);

		if (farray == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
		{
			farray[i] = c;
		}
	}
	return (farray);
}
