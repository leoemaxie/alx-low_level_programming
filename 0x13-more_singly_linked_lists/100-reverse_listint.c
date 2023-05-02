#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 *
 * @head: Pointer to the head struct of listint_t.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t i = *head;
	listint_t *node;

	for (; i != index; i++)
		node = node->next;

	return (*head);
}
