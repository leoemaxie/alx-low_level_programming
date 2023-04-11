#include "main.h"

/**
 * free_grid - Frees a two dimensional grid.
 *
 * @grid: The grid.
 * @height: Height of the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);
}
