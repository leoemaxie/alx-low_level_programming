#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list..
 *
 * @head: Pointer to listint_t list.
 *
 * Return: The address of the node where the loop starts,
 * NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	size_t n = 0;
	listint_t *i = h;

	for (i = i->next; i != NULL; i = i->next)
	{
		if (i)
		{
			free(i);
			n++;
		}
	}

	*h = NULL;
	return (n);
}
