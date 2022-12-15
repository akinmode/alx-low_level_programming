#include <stdio.h>

/* betty style doc for function main goes there */
/**
* main - Checks if a random generated number is negative or positive
* Description: Checks if a random generated number is negative or positive
* Return: a string output
*/
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
