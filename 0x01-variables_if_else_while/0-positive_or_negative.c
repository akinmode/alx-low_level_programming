#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */

int main(void)
{
	/**
	* The output of the program returns:
	* The number, followed by
	* if the number is greater than 0: is positive
	* if the number is 0: is zero
	* if the number is less than 0: is negative
	*/

	int n;

	srand(time(0));
 	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
