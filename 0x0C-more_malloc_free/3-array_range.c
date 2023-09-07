#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - array of integers.
 * @min: minimum value.
 * @max: maximum value.
 * Return: 0 upon successful
 */
int *array_range(int min, int max)
{
	int *y;
	int m;

	if (min > max)
		return (NULL);
	y = malloc(sizeof(*y) * ((max - min) + 1));
	if (y == NULL)
		return (NULL);
	for (m = 0; min <= max; m++, min++)
		y[m] = min;
	return (y);
}
