#include "main.h"

/**
 * create_array - Creates an array of chars, and initializes it with a
 * specific character.
 *
 * @size: The number of elements of the array.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to a newly allocated space in memory of thr array,
 * NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc((sizeof(size) / sizeof(int)) * size);

	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
