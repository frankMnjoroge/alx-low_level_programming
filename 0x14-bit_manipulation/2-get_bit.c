#include "main.h"
/**
 * get_bit - returns the value of a bit of an index
 * @n: number to search
 * @index: index parameter
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bval;

	if (index > 63)
		return (-1);

	bval = (n >> index) & 1;

	return (bval);
}
