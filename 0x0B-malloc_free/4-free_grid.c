#include "main.h"
#include <stdlib.h>

/**
 * free_grid - This function frees a 2 dimensional grid previously created by
 *  my alloc_grid function.
 *
 *  @grid: The grid to be freed.
 *
 *  @height: The number of rows in the grid
 *
 *  Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
