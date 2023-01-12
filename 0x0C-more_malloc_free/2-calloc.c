#include <stdlib.h>

/**
* _calloc - allocates memory for an array, using malloc.
* @nmemb: array pointer
* @size: array size
* Return: ointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *nwarray;
	unsigned int i;
	char *temp;

	if (nmemb == 0 || size == 0)
		return (NULL);
	nwarray = malloc(size * nmemb);
	if (!nwarray)
		return (NULL);

	for (i = size * nmemb, temp = nwarray; i; i--)
		*temp++ = 0;
	return (nwarray);
}
