#include "lists.h"

/**
 * sum_listint - Adds all the data (n) of a listint_t linked list. *
 * @head: Pointer to the head struct of listint_t.
 *
 * Return: Sum of all the data (n) of a listint_t linked list,
 * 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *i;

	if (head == NULL)
		return (0);

	for (i = head; i != NULL; i = i->next)
		sum += i->n;

	return (sum);
}
