#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * **alloc_grid - 2 dimensional array of integers
 *@width: with of the grid
 *@height: height of the grid
 *Return: 0 (success)
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k, l;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			grid[k][l] = 0;
		}
	}

	return (grid);
}
