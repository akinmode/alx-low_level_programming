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
	char alphabets;
	char alphabets_u;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);
	for (alphabets_u = 'A'; alphabets_u <= 'Z'; alphabets_u++)
		putchar(alphabets_u);
	putchar('\n');
	return (0);
}
