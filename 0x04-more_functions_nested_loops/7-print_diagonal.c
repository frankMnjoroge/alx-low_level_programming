#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: parameter value
 * Return: digonal line
 */
void print_diagonal(int n)
{
	int j, m;

	if (n <= 0)
		_putchar('\n');
	for (j = 0; j < n; j++)
	{
		for (m = 0; m < j; m++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
