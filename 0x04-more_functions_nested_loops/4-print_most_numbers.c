#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9 and omit 4 and 2
 * Return: 0 (success)
 */
void print_most_numbers(void)
{
	int m;

	for (m = 0 ; m <= 9 ; m++)
	{
		if (m != 2 && m != 4)
			_putchar(m + 'm');
	}
	_putchar('\n');
}
