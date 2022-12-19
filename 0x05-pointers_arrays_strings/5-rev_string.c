#include <stdio.h>
#include "main.h"

/**
* rev_string - Resetting a value
* @s: parameter
* Return: a value
*/

void rev_string(char *s)
{
	char *rev_s, aux;
	int s_count = 0;
	int i, k;

	rev_s = s;

	for (; *s != '\0'; s++)
	{
		s_count++;
	}

	for (k = 1; k < s_count; k++)
	{
		rev_s++;
	}

	for (i = 0; i < s_count; i++)
	{
		aux = s[i];
		s[i] = *rev_s;
		*rev_s = aux;
		rev_s--;
	}
}
