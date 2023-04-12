#include "main.h"

/**
 * strtow - Splits a string into words.
 *
 * @str: The string.
 *
 * Return: A pointer to a new array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	int i, j = 0, k;
	int len = strlen(str)1;
	char **strv = malloc(sizeof(char *) * len);

	if (str == NULL || str == 0 || strv == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		strv[i] = malloc(sizeof(char) * len);
		while (str[j] == ' ')
		{
			j++; /* skips consecutive spaces, tabs, etc */
			len--;
		}

		for (k = 0; str[j] != ' '; j++, k++)
		{
			len--;
			strv[i][k] = str[j];
		}
		strv[i][k] = '\0';
	}
	strv[i] = NULL;

	return (strv);
}
