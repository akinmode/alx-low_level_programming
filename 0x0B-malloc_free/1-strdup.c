#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: str memory to be duplicated
* Return: duplicated pointer
*/

char *_strdup(char *str)
{
	int i = 0, strc = 1;
	char *cparray;

	if (!str)
		return (NULL);

	while (str[strc])
	{
		strc++;
	}

	cparray = malloc((sizeof(char) * strc) + 1);

	if (!cparray)
		return (NULL);

	while (i < strc)
	{
		cparray[i] = str[i];
		i++;
	}

	cparray[i] = '\0';
	return (cparray);
}
