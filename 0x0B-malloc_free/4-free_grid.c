#include "main.h"
#include <stdlib.h>

/**
 * free_grid -  A function that frees the 2 dimensional
 * grid from memory created using the alloc_grid function.
 * @grid: A pointer to the address of the 2-dimensional grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
