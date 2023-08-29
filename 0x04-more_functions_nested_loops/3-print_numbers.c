#include "main.h"
/**
 * print_numbers - Function that that prints 0 to 9
 * Return: 0 (success)
 */
void print_numbers(void)
{
	int m;

	for (m = 0 ; m <= 9 ; m++)
	{
		_putchar (m + '0');
	}
	_putchar('\n');
}
