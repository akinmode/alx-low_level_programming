#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of your program
* @ac: array count
* @av: array
* Return: value
*/

char *argstostr(int ac, char **av)
{
	int i, j = 0, targc = 0;
	char *totarray, *cpt, *rpt;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		cpt = av[i];
		while (*cpt++)
			targc++;
	}
	/* Add the arg couunt to provide for the newlines */
	totarray = malloc((sizeof(char) * targc) + 1 + ac);
	if (!totarray)
		return (NULL);

	while (ac--)
	{
		rpt = *av;
		for (; *rpt != '\0'; rpt++)
		{
			totarray[j] = *rpt;
			j++;
		}
		totarray[j] = '\n';
		av++;
		j++;
	}
	totarray[j] = '\0';
	return (totarray);
}
