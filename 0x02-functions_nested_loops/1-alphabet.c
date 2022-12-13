#include <stdio.h>

/**
* main - print a value
* Desccription: prints all the alphabets in lower case
* Return: string value
*/

void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);
	putchar('\n');
}
