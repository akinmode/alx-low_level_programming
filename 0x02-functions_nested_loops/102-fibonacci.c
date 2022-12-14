#include <stdio.h>

/**
* print_to_98 - print a value
* @n: parameter
* Description: prints all the alphabets in lower case
* Return: string value
*/

int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", j);
		else if (i == 1)
			printf(", %ld", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}

		++i;
	}

	printf("\n");
	return (0);
}
