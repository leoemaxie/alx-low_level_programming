#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 *
 * @head: Pointer to listint_t list.
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *i;

	for (i = *head; i != NULL; i = i->next)
		free(i);
	*head = NULL;
}
