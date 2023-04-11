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
	int i, j = 0;
	int len = strlen(str);
	char *strv[6];

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0; i < len; i++)
	{
		for (; str[j] != ' '; j++)
		{
			*strv[i] = str[j];
			strv[i]++;
			len--;
		}
		while (str[j] == ' ')
		{
			/* skips consecutive spaces, tabs, etc */
			j++;
			len--;
		}
	}
		strv[i] = NULL;

	return (strv);
}
