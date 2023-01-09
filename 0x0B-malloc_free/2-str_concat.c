#include <stdlib.h>

/**
* str_concat - concatenates two strings.
* @s1: str one
* @s2: str two
* Return: merged pointer
*/

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, strc1 = 1, strc2 = 1;
	char *nwarray;

	while (s1[strc1])
	{
		strc1++;
	}
	while (s2[strc2])
	{
		strc2++;
	}

	nwarray = malloc((sizeof(char) * (strc1 + strc2)) + 1);

	if (!nwarray)
		return (NULL);

	while (i < strc1)
	{
		nwarray[i] = s1[i];
		i++;
	}
	while (j < strc2)
	{
		nwarray[i] = s2[j];
		i++;
		j++;
	}
	nwarray[i] = '\0';
	return (nwarray);
}
