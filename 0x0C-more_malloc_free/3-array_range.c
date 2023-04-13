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
	int size = max - min;
	int *array = size >= 0 ? malloc(size) : NULL;

	if (array == NULL)
		return (NULL);
	
	for (i = 0; min <= size; i++, min++)
		array[i] = min;

	return (array);
}
