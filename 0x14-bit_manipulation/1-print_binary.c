#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary format
 */
void print_binary(unsigned long int n)
{
	int y, cnt = 0;
	unsigned long int currnt;

	for (y = 63; y >= 0; y--)
	{
		currnt = n >> y;

		if (currnt & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
