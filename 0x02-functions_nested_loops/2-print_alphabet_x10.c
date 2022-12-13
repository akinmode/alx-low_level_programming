#include <stdio.h>

/**
* print_alphabet_x10 - print a value
* Desccription: prints all the alphabets in lower case
* Return: string value
*/

void print_alphabet(void);

void print_alphabet_x10(void)
{
	int i = 1;

	for (i = 1; i <= 10; i++)
		print_alphabet();
}

void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);
	putchar('\n');
}
