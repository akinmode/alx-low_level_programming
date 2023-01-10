#include <stdlib.h>

/**
* strtow - splits a string into words.
* @str: string to split
* Return: array of strings
*/

char **strtow(char *str)
{
	int strc = 0;

	if (str == NULL || str == "")
		return (NULL);

	while (str[strc])
		strc++;

	return (NULL);
}
