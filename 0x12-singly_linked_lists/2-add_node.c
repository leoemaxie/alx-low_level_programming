#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 *
 * @h: Pointer to the head of the list_t list.
 * @str: The string to of the str member of the node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
    unsigned int len = 0;
    list_t *node = malloc(sizeof(list_t));

    if (node == NULL)
        return (NULL);

    while (str[len])
        len++;

    node->str = strdup(str);
    node->len = len;
    node->next = *head;
    *head = node;

    return (node);
}
