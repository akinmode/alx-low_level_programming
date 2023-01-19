#ifndef _VARHEADER_
#define _VARHEADER_
#include <stdarg.h>

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

/**
* struct funclist - a list of functions for printing to the screen
* @f: function to use for printing
* @felem: celement function
*/
typedef struct funclist
{
	void (*f)(va_list);
	char felem;
} flist;
#endif
