#include <stdio.h>
#include "main.h"

int strcompare(char *s1, char *s2);
int wildcards(char *s1, char *s2);

/**
* wildcmp -  compares two strings and returns 1 if the strings
* can be considered identical, otherwise return 0.
* @s1: input string one
* @s2: input string two w/o wildcards
* Return: comparison
*/

int wildcmp(char *s1, char *s2)
{
	/* if string two contains wildcaards at position 0*/
	if (*s2 == '*')
		return (wildcards(s1, s2));
	return (strcompare(s1, s2));
}

/**
 * strcompare - compare
 * @s1: input string one
 * @s2: input string two w/o wildcards
 *
 * Return: comparison
 */
int strcompare(char *s1, char *s2)
{
	if (*s2 == '*')
		return (wildcards(s1, s2 + 1));
	if (*s1 == 0 && *s2 == 0)
		return (1);
	if (*s1 == *s2)
		return (strcompare(s1 + 1, s2 + 1));
	return (0);
}

/**
 * wildcards - checks for wildcards *
 * @s1: input string one
 * @s2: input string two w/o wildcards
 * Return: comparison
 */

int wildcards(char *s1, char *s2)
{
	if (*s2 == '*')
		return (wildcards(s1, s2 + 1));
	if (*s2 == 0)
		return (1);
	if (*s1 == 0)
		return (0);
	if (*s1 != *s2)
		return (wildcards(s1 + 1, s2));
	if (!(strcompare(s1 + 1, s2 + 1)))
		return (wildcards(s1 + 1, s2));
	return (1);
}
