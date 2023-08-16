#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 * @m: Function paremeter values
 * Return: 0 (success)
 */

int print_last_digit(int m)
{
	int k;

	k = m % 10;
	if (k < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
