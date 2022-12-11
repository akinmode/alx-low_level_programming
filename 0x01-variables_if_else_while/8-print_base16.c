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
	int numbers;

	for (numbers = 48; numbers <= 57; numbers++)
		putchar(numbers);
	for (numbers = 97; numbers <= 102; numbers++)
		putchar(numbers);
	putchar('\n');
	return (0);
}
