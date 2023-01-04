#include <stdio.h>
#include "main.h"


int _strlen_recursion(char *s);
int check_palindrome(char *s, int n);

/**
* is_palindrome - returns 1 if a string is a palindrome and 0 if not.
* @s: input string
* Return: a palindrome
*/

int is_palindrome(char *s)
{
	int strlen;

	strlen = _strlen_recursion(s);
	return (check_palindrome(s, strlen - 1));
}

/**
* _strlen_recursion - returns the length of a string.
* @s: input string
* Return: length of a string
*/

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
* check_palindrome - checks if palindrome
* @s: input string
* @n: string length
* Return: checks
*/

int check_palindrome(char *s, int n)
{
	if (n < 1)
		return (1);
	if (*s == *(s + n))
		return (check_palindrome(s + 1, n - 2));
	return (0);
}
