#include <stddef.h>

/**
* binary_to_uint - function that converts a binary number to an unsigned int.
* @b: binary input
* Return: unsigned integer in decimal
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, idx = 0, strc = 0;

	while (b[strc] != '\0')
	{
		strc++;
	}

	if (b != NULL)
	{
		while (strc--)
		{
			if (b[strc] != '0' && b[strc] != '1')
				return (0);
			if (b[strc] == 49)
				res += 1 << idx;
			idx++;
		}
		return (res);
	}
	return (0);
}
