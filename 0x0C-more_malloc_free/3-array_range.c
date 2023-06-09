#include "main.h"

/**
 * array_range - Creates an array of integers.
 *
 * @min: Minimum integer of the array.
 * @max: Maximum integer of the array.
 *
 * Return: A pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int i;
	int size = max - min + 1;
	int *array;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (size));
	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		array[i] = min++;

	return (array);
}
