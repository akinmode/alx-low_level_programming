#include <stdlib.h>

/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: old array pointer
* @old_size: old array size
* @new_size: new array size
* Return: array pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nwarray;
	char *oldpt, *newpt;

	if (new_size == old_size)
		return (ptr);
	if (ptr && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr || new_size > 0 || new_size <= old_size)
	{
		nwarray = malloc(new_size);
		if (!nwarray)
			return (NULL);
	}
	if (new_size > 0 && ptr != NULL)
	{
		newpt = nwarray;
		oldpt = ptr;
		if (new_size < old_size)
			old_size = new_size;
		while (old_size--)
			*newpt++ = *oldpt++;
	}
	free(ptr);
	return (nwarray);
}
