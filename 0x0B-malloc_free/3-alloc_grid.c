#include "main.h"

/**
 * alloc_grid - Creates a two dimensional array of integers.
 *
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: A pointer to a two dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array = malloc(sizeof(int *) * width);

	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(height * sizeof(int));
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}

	return (array);
}
