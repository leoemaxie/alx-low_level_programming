#include "lists.h"

/**
 * print_listint - Prints all the elements of a list_t list.
 *
 * @h: Pointer to listint_t list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *next;
	size_t size  = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		next = h->next;
		size++;
		h = next;
	}

	return (size);
}
