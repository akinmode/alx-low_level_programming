#include <stdio.h>

/**
* main - returns program name
* @argc: argument count
* @argv: input array of arguments
* Return: a value
*/
int main(int argc, char *argv[])
{
	/* prevent compilation error of unused arguments */
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
