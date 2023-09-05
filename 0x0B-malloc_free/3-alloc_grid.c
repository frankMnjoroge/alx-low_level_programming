#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: parameter value of width
 * @height: parameter value of height
 * Return: pointer to an array
 */
int **alloc_grid(int width, int height)
{
	int y, z;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * (height));
	if (p == NULL)
		return (NULL);
	for (y = 0; y < height; y++)
	{
		p = malloc(sizeof(int *) * (width));
			if (p[y] == NULL)
			{
			for (; y >= 0; y--)
				free(p[y]);
			free(p);
			return (NULL);
			}
	}
	for (y = 0; y < height; y++)
	{
		for (z = 0; z < width; z++)
		p[y][z] = 0;
	}
	return (p);
}
