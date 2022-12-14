#include <stdio.h>
#include "main.h"

/**
* print_times_table - print a value
* @n: parameter
* Description: prints all the alphabets in lower case
* Return: string value
*/

void print_times_table(int n)
{
	int i, x;

	if (n == 0)
	{
		printf("%d", n);
		putchar('\n');
	}
	else if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (x = 0; x <= n; x++)
			{
				if ((i * x) <= 9)
				{
					x == 0 ? printf("%d,", 0) : x < n ?
					printf("   %d,", i * x) : printf("   %d", i * x);
				}
				else if (((i * x) >= 10) && ((i * x) <= 99))
				{
					x == 0 ? printf("%d,", 0) : x < n ?
					printf("  %d,", i * x) : printf("  %d", i * x);
				}
				else if (((i * x) >= 100))
				{
					x == 0 ? printf("%d,", 0) : x < n ?
                	                printf(" %d,", i * x) : printf(" %d", i * x);
				}
			}
			putchar('\n');
		}
	}
}
