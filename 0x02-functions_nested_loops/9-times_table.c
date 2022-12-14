#include <stdio.h>
#include "main.h"

/**
* times_table - print a value
* Description: prints all the alphabets in lower case
* Return: string value
*/

void times_table(void)
{
	int i, x;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if ((i * x)/10 == 0)
			{
				x < 9 ? printf("%d,  ", i * x) : printf("%d", i * x);
			}
			else if ((i * x)/10 >= 1 && (i * x)/10 < 10)
			{
				x < 9 ? printf("%d, ", i * x) : printf("%d", i * x);
			}
		}
		putchar('\n');
	}
}
