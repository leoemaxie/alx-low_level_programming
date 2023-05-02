#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index index of a listint_t
 * linked list..
 *
 * @head: Pointer to the head struct of listint_t.
 * @index: The index of the node to delete, starting at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node = *head;
	listint_t *tmp;

	for (i = 0; i < index; i++)
	{
		if (node->next == NULL)
			return (-1);
		node = node->next;
	}

	tmp = node;
	tmp = tmp->next;
	free(node);

	return (1);
}
