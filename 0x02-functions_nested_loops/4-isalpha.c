#include <stdio.h>

/**
* _isalpha - print a value
* @c: input parameter
* Description: prints all the alphabets in lower case
* Return: string value
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
