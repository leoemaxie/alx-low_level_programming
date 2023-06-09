#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 *
 * @head: Pointer to listint_t list.
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
