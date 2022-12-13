#include <stdio.h>
#include "main.h"

/**
* main - print out a value
* Description:
* Return: return a value
*/

int main(void)
{
	char *string = "_putchar";

	while (*string)
	{
		putchar(*string);
		string++;
	}
	putchar('\n');
	return (0);
}
