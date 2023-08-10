#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2-D array
 *
 * @grid: a pointer to the 2 dimensional array
 * @height: the height of the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
