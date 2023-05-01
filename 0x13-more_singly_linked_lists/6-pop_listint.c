#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 *
 * @head: Pointer to the head struct of listint_t.
 *
 * Return: The head node’s data (n) or 0 if it doesn't exist.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *node = *head;

	if (!node)
		return (0);

	n = node->n;
	*head = node->next;
	free(node);

	return (n);
}
