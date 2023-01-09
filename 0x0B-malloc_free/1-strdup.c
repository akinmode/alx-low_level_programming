#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: str memory to be duplicated
* Return: duplicated pointer
*/

char *_strdup(char *str)
{
	int strc = 0;
	char *cparray;

	if (!str)
		return (NULL);

	for (; *str != '\0'; str++)
	{
		strc++;
	}
	cparray = malloc((sizeof(char) * strc) + 1);
	if (!cparray)
		return (NULL);

	while (*str)
	{
		*cparray++ = *str++;
	}
	*cparray = '\0';
	return (cparray);
}
