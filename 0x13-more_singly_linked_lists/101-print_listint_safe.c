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
		printf("[%p] %d\n", i, i->n);
		n++;
	}

	if (n == 0)
		exit(98);

	return (n);
}
