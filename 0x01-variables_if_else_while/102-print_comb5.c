#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
* main - Checks if a random generated number is negative or positive
* Description: Checks if a random generated number is negative or positive
* Return: a string output
*/
int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if (i <= k && j < l)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if (i != 57 || j != 56)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
