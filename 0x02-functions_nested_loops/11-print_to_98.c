#include <stdio.h>
#include "main.h"

/**
* print_to_98 - print a value
* @x: parameter one
* @y: parameter two
* Description: prints all the alphabets in lower case
* Return: string value
*/

void print_to_98(int n)
{
	int i;

	for (i = n; i < 98; i++)
	{
		printf("%d, ", i);
	}
	printf("%d", 98);
	putchar('\n');
}
