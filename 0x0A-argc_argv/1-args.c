#include <stdio.h>

/**
 * main - returns argument counts
 * @argc: argument count
 * @argv: input array of arguments
 * Return: a value
 */
int main(int argc, char *argv[])
{
	/* prevent compilation error of unused arguments */
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
