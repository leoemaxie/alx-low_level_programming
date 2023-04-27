#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 *
 * @h: Pointer to list_t list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *i;
	size_t n = 0;

	for (i = h; i != NULL; i = i->next)
	{
		if (i->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", i->len, i->str);
		n++;
	}

	return (n);
}
