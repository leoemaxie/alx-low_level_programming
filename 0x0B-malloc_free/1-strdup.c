#include "main.h"

/**
 * _strdup - Creates a dynamic memory and copies the content of str into it.
 *
 * @str: The string to copy.
 *
 * Return: A pointer to a newly allocated space in memory on success,
 * NULL if there is insufficient memory  or str is NULL.
 */

char *_strdup(char *str)
{
	int i;
	char *cpy_str = str == NULL ? NULL : malloc(sizeof(char) * strlen(str));

	if (str == NULL || cpy_str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		cpy_str[i] = str[i];

	return (cpy_str);
}
