#include "lists.h"

/**
 * list_len - Gets the number of elements in a list_t list.
 *
 * @h: Pointer to list_t list.
 *
 * Return: The number of elements in list_t list.
 */
size_t list_len(const list_t *h)
{
	const list_t *i;
	size_t n = 0;

	for (i = h; i != NULL; i = i->next)
		n++;

	return (n);
}
