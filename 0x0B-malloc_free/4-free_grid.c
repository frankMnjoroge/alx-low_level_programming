#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid:paramter value
 * @height: parameter value of height
 * Return: 0 if successful
 */
void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
	{
		free(grid[m]);
	}
	free(grid);
}
