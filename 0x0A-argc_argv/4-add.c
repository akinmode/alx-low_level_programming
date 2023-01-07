#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - returns program name
* @argc: argument count
* @argv: input array of arguments
* Return: a value
*/
int main(int argc, char *argv[])
{
	int ct, result = 0;
	char *s;

	ct = argc - 1;
	argv++;

	if (ct == 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		while (ct--)
		{
			s = *argv;

			for (; *s != '\0'; s++)
			{
				if (*s < 48 || *s > 57)
				{
					printf("%s\n", "Error");
					return (1);
				}
			}
			result += atoi(*argv);
			argv++;
		}
		printf("%d\n", result);
		return (1);
	}
	return (0);
}
