#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 *
 * @h: Pointer to the head of the list_t list.
 * @str: The string to of the str member of the node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    unsigned int len = 0;
    list_t *new = malloc(sizeof(list_t));
    list_t *tmp = *head;

    if (new == NULL)
        return (NULL);

    while (str[len])
        len++;

    new->str = strdup(str);
    new->len = len;
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
