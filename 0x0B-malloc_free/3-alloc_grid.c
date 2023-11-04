#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - A function that creates a 2-dimentional array
 * @width: Width of the array
 * @height: Height of the array
 *
 * Return: always 0
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	/* check for invalid dimensions */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/* allocate memory for the array of pointers (rows) */
	grid = (int **)malloc(height * sizeof(int));

	/* check if memory allocation failed */
	if (grid == NULL)
	{
		return (NULL);
	}
	/* allocate memory for each row */
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		/* check if memory allocation failed */
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		/* initialize element of the row to 0 */
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
