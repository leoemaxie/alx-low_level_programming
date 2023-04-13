#include "main.h"

/**
 * _calloc - Allocates memory for an array of number of elements of
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
	char *ptr;

	if (nmemb == NULL || size == NULL)
		return (NULL);

	ptr = malloc(area);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < area; i++)
		ptr[i] = 0;
	return (ptr);
}
