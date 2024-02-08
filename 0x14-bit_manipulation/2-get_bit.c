/**
* get_bit - function that returns the value of a bit at a given index.
* @n: integer input
* @index: given index to return
* Return: binary output
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int rindx;

	if (index > 63)
		return (-1);

	rindx = 1 << index;
	return ((n & rindx) > 0);
}
