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
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if ((i != j && j != k) && (i < j && j < k))
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i < 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
