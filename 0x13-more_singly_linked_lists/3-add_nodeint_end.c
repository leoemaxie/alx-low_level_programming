#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list..
 *
 * @head: Pointer to the head struct of listint_t.
 * @n: The integer member of each struct.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (new);
}
