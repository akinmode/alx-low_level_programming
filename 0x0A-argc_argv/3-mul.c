#include <stdio.h>
#include <stdlib.h>

/**
* main - returns program name
* @argc: argument count
* @argv: input array of arguments
* Return: a value
*/
int main(int argc, char *argv[])
{
	int ct, result = 1;

	if (argc < 3)
	{
		printf("%s\n", "Error");
	}
	else
	{
		ct = argc - 1;
		argv++;

		while (ct--)
		{
			result *= atoi(*argv);
			argv++;
		}
		printf("%d\n", result);
		return (1);
	}
	return (0);
}
