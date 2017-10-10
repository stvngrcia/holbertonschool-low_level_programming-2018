#include <stdlib.h>

/**
 * free_grid - Freeing a grid
 * @grid: a double pointer to an array
 * @height: The height of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
