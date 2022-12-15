#include <stdio.h>

void print_alphabet(void);

/**
* _isupper - print a value
* @c: input parameter
* Desccription: prints all the alphabets in lower case
* Return: string value
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
