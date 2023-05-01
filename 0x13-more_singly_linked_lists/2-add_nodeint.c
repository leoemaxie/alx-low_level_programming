#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 *
 * @head: Pointer to the head struct of listint_t.
 * @n: The integer member of each struct.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
