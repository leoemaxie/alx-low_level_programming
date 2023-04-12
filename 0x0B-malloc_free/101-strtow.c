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
	int len = strlen(str);
	char **strv = malloc(sizeof(int *) * len);

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0; i < len; i++)
	{	
		strv[i] = malloc(sizeof(char) * len);

		for (k = 0; str[j] != ' '; j++, k++)
		{
			strv[i][k] = str[j];
			len--;
		}

		while (str[j] == ' ')
		{
			j++; /* skips consecutive spaces, tabs, etc */
			len--;
		}
	}
	strv[i] = NULL;

	return (strv);
}
