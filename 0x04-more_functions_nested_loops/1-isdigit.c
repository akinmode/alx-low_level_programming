#include <stdio.h>

void print_alphabet(void);

/**
* _isdigit - print a value
* @c: input parameter
* Desccription: prints all the alphabets in lower case
* Return: string value
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
