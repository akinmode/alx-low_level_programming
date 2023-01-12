#include <stdio.h>
#include <stdlib.h>

int digitchk(char *s);

/**
* main - multiplies two positive numbers
* @argc: argument count
* @argv: input array of arguments
* Return: a value
*/

int main(int argc, char *argv[])
{
	int ct;
	long int result = 1;

	if (argc < 3)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	else
	{
		ct = argc - 1;
		argv++;

		while (ct--)
		{
			if (!digitchk(*argv))
			{
				printf("%s\n", "Error");
				exit(98);
			}
			else
			{
				result *= atoi(*argv);
			}
			argv++;
		}
		printf("%ld\n", result);
	}
	return (0);
}

/**
* digitchk - checks if passed arg are numeric.
* @s: input string
* Return: value.
*/

int digitchk(char *s)
{
	while (*s)
	{
		if ((*s < '0' || *s > '9') && *s != '\0')
		{
			return (0);
		}
		s++;
	}
	return (1);
}
