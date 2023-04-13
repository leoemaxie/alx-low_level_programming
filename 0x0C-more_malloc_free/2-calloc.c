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
	void *ptr = nmemb * size != 0 ? malloc(nmemb * size) : NULL;

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
