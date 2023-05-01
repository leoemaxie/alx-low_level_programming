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
	unsigned int i = 0;
	listint_t *node = head;

	for (; i != index; i++)
		node = node->next;

	if (node == NULL)
		return (NULL);

	return (node);
}
