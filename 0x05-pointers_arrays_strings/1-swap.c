#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: parameter of value one
 * @b: parameter of secind value
 * Return: 0 if successful
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

