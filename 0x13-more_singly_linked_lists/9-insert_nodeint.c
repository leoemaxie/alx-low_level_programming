#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 *
 * @head: Pointer to the head struct of listint_t.
 * @idx: The index of the list where the new node should be added.
 * Index starts at 0
 * @n: The number field of rhe listint_t structure.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
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
