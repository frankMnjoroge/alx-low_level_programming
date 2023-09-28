#include "main.h"
/**
 * flip_bits - counts the number of bits to flip from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y, cnt = 0;
	unsigned long int currnt;
	unsigned long int k = n ^ m;

	for (y = 63; y >= 0; y--)
	{
		currnt = k >> y;
		if (currnt & 1)
			cnt++;
	}

	return (cnt);
}
