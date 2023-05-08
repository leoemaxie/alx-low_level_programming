#include "lists.h"

/**
 * print_listint_safe - Prints all the elements of a list_t list.
 *
 * @head: Pointer to listint_t list.
 *
 * Return: The number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *i;
	size_t n  = 0;

	for (i = head; i != NULL; i = i->next)
	{
		if (!i)
			break;
		printf("[%p] %d\n", (void *)i, i->n);
		n++;
	}

	return (n);
}
