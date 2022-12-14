#include <stdio.h>

/**
* sum_nat - print a value
* Description: prints all the alphabets in lower case
* Return: string value
*/

int main(void)
{
	int i;
	int nsum;

	nsum = 0;
	for (i = 1; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			nsum = nsum + i;
		}
	}
	printf("%d", nsum);
	putchar('\n');
	return (0);
}
