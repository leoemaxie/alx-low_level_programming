#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list and sets the head to NULL.
 *
 * @h: Pointer to the head of listint_t linked list.
 *
 * Return: The size of the list that was free’d.
 */
size_t free_listint_safe(listint_t **h)
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
