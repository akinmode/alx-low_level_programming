#include <stdlib.h>

/**
* string_nconcat - concatenates two strings.
* @s1: str one
* @s2: str two
* @n: number of bytes to copy
* Return: merged pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, nwlen, strc1 = 0, strc2 = 0;
	char *nwarray;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[strc1])
		strc1++;
	while (s2[strc2])
		strc2++;

	nwlen = n < strc2 ? strc1 + n : strc1 + strc2;
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
