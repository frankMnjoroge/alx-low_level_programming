#include "main.h"
/**
* print_square -  prints a square, followed by a new line
* @size:parameter size values
* Return: 0 when successful
*/
void print_square(int size)
{
	int y, z;

	if (size <= 0)
		_putchar('\n');
	for (y = 0; y < size; y++)
	{
		for (z = 0; z < size; z++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
