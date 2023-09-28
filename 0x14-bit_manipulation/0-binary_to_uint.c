#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string holding the binary number
 * Return: number converted
 */
unsigned int binary_to_uint(const char *b)
{
	int y;
	unsigned int d_val = 0;

	if (!b)
		return (0);

	for (y = 0; b[y]; y++)
	{
		if (b[y] < '0' || b[y] > '1')
			return (0);
		d_val = 2 * d_val + (b[y] - '0');
	}

	return (d_val);
}

