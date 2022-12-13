#include <stdio.h>

void print_alphabet(void);

/**
* _islower - print a value
* @c: input parameter
* Desccription: prints all the alphabets in lower case
* Return: string value
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
