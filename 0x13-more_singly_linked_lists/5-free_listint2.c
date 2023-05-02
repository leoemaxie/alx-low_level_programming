#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 *
 * @head: Pointer to the head structure of listint_t list.
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	*head = NULL;
}
