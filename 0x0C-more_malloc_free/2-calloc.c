#include "main.h"

/**
 * malloc_checked - Allocates memory for an array of number of elements of
 * size bytes each.
 *
 * @nmemb: Number of the array elements.
 * @size: Size of memory to allocate.
 *
 * Return: A pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int area = nmemb * size;
	char *ptr = area != 0 ? malloc(area) : NULL;

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < area; i += size)
		ptr[i] = 0;
	return (ptr);
}
