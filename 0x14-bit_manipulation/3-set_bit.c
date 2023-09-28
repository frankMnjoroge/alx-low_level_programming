#include "main.h"
/**
 * set_bit - sets a bit at a given index
 * @n: pointer to number for change
 * @index: index of the bit to set
 * Return: 1 upon success, -1 failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
