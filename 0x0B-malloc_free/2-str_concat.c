#include "main.h"

/**
 * str_concat - Concatenates two strings.
 *
 * @s1: First string to concatenate.
 * @s2: Second string to concatenate.
 *
 * Return: Poinrer to a newly allocated space in memory which contains the
 * contents of s1, followed by the contents of s2, and null terminated;
 * NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int len = strlen(s1);
	/**
	 * Calculates the size of s1 excluding the null terminator adds it to the
	 * size of s2 including its null terminator.
	 */
	char *str = malloc((sizeof(char) * len - 1) +
			(sizeof(char) * strlen(s2)));

	if (str == NULL)
		return (NULL);
	if (s1 == NULL || s2 == NULL)
	{
		*s1 = '\0';
		*s2 = '\0';
	}

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		str[len + i] = s2[i];

	str[len + i] = '\0';

	return (str);
}
