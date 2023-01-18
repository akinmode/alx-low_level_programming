#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* op_add - adds integers.
* @a: input int1
* @b: input int2
* Return: sum
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - subtracts integers.
* @a: input int1
* @b: inout int2
* Return: difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiplies integers
* @a: input int1
* @b: input int2
* Return: multiplier
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - divides integers
* @a: input int1
* @b: input int2
* Return: dividend
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}

	return (a / b);
}

/**
* op_mod - divides intergers
* @a: input int1
* @b: input int2
* Return: modulo
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}

	return (a % b);
}
