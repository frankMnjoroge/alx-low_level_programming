#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return : 0 succes
 */
void more_numbers(void)
{
	int m;
	int j;

	for (m = 0 ; m < 10 ; m++)
	{
		for (j = 0 ; j < 14 ; j++)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
