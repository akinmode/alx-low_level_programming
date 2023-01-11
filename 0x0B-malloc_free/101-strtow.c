#include <stdlib.h>

/**
* strtow - splits a string into words.
* @str: string to split
* Return: array of strings
*/

char **strtow(char *str)
{
	int wc = 0, i = 0;
	char **cstr, *pt = str, delim = ' ';

	if (str == NULL || *str == '\0')
		return (NULL);
	while (*pt)
	{
		if (!(*pt == delim) && (*(pt + 1) == delim || *(pt + 1) == '\0'))
			wc++;
		pt++;
	}
	if (wc == 0)
		return (NULL);
	cstr = malloc(sizeof(char *) * (wc + 1));
	if (!cstr)
		return (NULL);
	while (*str)
	{
		if (*str != delim)
		{
			for (pt = str, wc = 0; *pt != ' ' && *pt != 0;)
				wc++, pt++;
			cstr[i] = malloc(wc + 1);
			if (cstr[i] == 0)
			{
				while (i >= 0)
					free(cstr[--i]);
				free(cstr);
				return (0);
			}
			pt = cstr[i++];
			while (*str != delim && *str != '\0')
				*pt++ = *str++;
			*pt = '\0';
		}
		else
			str++;
	}
	cstr[i] = '\0';
	return (cstr);
}
