#include "lists.h"

/**
 * get_nodeint_at_index - Adds a new node at the end of a listint_t list.
 *
 * @head: Pointer to the head struct of listint_t.
 * @index: The index of the node, starting at 0.
 *
 * Return: The nth node of a listint_t linked list or NULL if it doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = head;

	for (; i != index; i++)
		node = node->next;

	if (node == NULL)
		return (NULL);

	return (node);
}
