#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/* PROTOTYPES */
void print_a_char(char *delim, va_list args);
void print_a_integer(char *delim, va_list args);
void print_a_float(char *delim, va_list args);
void print_a_char_ptr(char *delim, va_list args);

/**
* print_all - function that prints anything..
* @format: format for print
* Return: string
*/

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *delim = "";

	flist func_types[] = {
		{ print_a_char, 'c' },
		{ print_a_integer, 'i' },
		{ print_a_float, 'f' },
		{ print_a_char_ptr, 's' }
	};

	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == func_types[j].felem)
			{
				func_types[j].f(delim, args);
				delim = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}

/**
* print_a_char - prints a character of char type
* @args: variadic arguments
* Return: none
*/
void print_a_char(char *delim, va_list args)
{
	printf("%s%c", delim, (char) va_arg(args, int));
}

/**
* print_a_integer - prints a character of integer type
* @args: A variadic arguments
* Return: none
*/
void print_a_integer(char *delim, va_list args)
{
	printf("%s%i", delim, va_arg(args, int));
}

/**
* print_a_float - prints a character of float type
* @args: variadic arguments
* Return: Nothing
*/
void print_a_float(char *delim, va_list args)
{
	printf("%s%f", delim, (float) va_arg(args, double));
}

/**
* print_a_char_ptr - prints the content of pointer to char type
* @args: A list of variadic arguments
* Return: Nothing
*/
void print_a_char_ptr(char *delim, va_list args)
{
	char *temp = va_arg(args, char *);

	if (temp == NULL)
	{
		printf("%s%s", delim, "(nil)");
		return;
	}

	printf("%s%s", delim, temp);
}
