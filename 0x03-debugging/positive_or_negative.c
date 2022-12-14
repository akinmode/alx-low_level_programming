#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
* positive_or_negative - Checks if a random generated number is negative or positive
* @i: parameter
* Description: Checks if a random generated number is negative or positive
* Return: a string output
*/
void positive_or_negative(int i)
{

	/*srand(time(0));
	i = rand() - RAND_MAX / 2;*/
	/* your code goes there */
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
