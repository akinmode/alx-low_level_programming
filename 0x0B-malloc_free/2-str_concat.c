#include <stdlib.h>

/**
* str_concat - concatenates two strings.
* @s1: str one
* @s2: str two
* Return: merged pointer
*/

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, nwlen, strc1 = 1, strc2 = 1;
	char *nwarray;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[strc1])
		strc1++;
	while (s2[strc2])
		strc2++;

	nwlen = strc1 + strc2;
	nwarray = malloc((sizeof(char) * nwlen) + 1);

	if (!nwarray)
		return (NULL);

	while (i < nwlen)
	{
		if (i <= strc1)
			nwarray[i] = s1[i];
		if (i >= strc1)
		{
			nwarray[i] = s2[j];
			j++;
		}
		i++;
	}
	nwarray[i] = '\0';
	return (nwarray);
}
