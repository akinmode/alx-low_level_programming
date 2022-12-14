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
			if ((i * x) / 10 == 0)
			{
				if (x < 9)
				{
					_putchar((i * x) + '0');
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				else
				{
					_putchar((i * x) + '0');
				}
			}
			else if ((i * x) / 10 >= 1 && (i * x) / 10 < 10)
			{
				if (x < 9)
                                {
                                        _putchar((i * x) + '0');
                                        _putchar(44);
                                        _putchar(32);
                                }
                                else
                                {
                                        _putchar((i * x) + '0');
                                }
			}
		}
		_putchar('\n');
	}
}
