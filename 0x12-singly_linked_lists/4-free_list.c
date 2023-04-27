#include "lists.h"

/**
 * free_list - Frees memory allocated to a list_t list.
 *
 * @head: Pointer to the head node of the list.
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		if (i->str)
			free(i->str);
		free(i);
	}
}
