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
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);
	for (y = 0; y < height; y++)
	{
		p[y] = malloc(sizeof(int *) * width);
			if (p[y] == NULL)
			{
				free(p);
				for (z = 0; z <= height; z++)
					free(p[z]);
				return (NULL);
			}
			for (z = 0; z <= width; z++)
				p[y][z] = 0;
	}
	return (p);
}
