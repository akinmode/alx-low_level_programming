#include <stdio.h>
#include <math.h>

/**
* main - Highest Prime Number
* Return: string
*/

int main(void)
{
	long i, max_factor;
	long number = 612852475143;
	double square = sqrt(number);

	for (i = 1; i <= square; i++)
	{
		if (number % i == 0)
		{
			max_factor = number / i;
		}
	}

	printf("%ld\n", max_factor);
	return (0);
}
