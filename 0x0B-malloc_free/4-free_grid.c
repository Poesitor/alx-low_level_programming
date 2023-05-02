#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D array created by the alloc_grid function
 *
 * @grid: The pointer to the 2D array to be freed
 * @height: The height or number of rows of the 2D array
 *
 * Return: void
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
