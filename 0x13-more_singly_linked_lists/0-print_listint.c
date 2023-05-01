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
	const listint_t *i;
	size_t n  = 0;

	for (i = h; i != NULL; i = i->next)
	{
		printf("%d\n", i->n);
		n++;
	}

	return (n);
}
