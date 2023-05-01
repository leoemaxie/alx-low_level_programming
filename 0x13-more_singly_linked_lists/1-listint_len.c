#include "lists.h"

/**
 * listint_len - Calculates the nmber of elements of a list_t list.
 *
 * @h: Pointer to listint_t list.
 *
 * Return: The number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *i;
	size_t n  = 0;

	for (i = h; i != NULL; i = i->next)
		n++;

	return (n);
}
