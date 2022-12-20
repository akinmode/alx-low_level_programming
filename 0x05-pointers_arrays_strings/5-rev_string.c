#include <stdio.h>
#include "main.h"

/**
* rev_string - Resetting a value
* @s: parameter
* Return: a value
*/

void rev_string(char *s)
{
	int l = 0, i;
	char *begin_ptr, *end_ptr, ch;

	while (s[l] != '\0')
	{
		l++;
	}

	begin_ptr = s;
	end_ptr = s + l - 1;

	for (i = 0; i < (l - 1) / 2; i++)
	{
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;

		begin_ptr++;
		end_ptr--;
	}
}
