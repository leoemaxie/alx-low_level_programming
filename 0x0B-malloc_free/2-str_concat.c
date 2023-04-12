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
	int len_s1 = s1 != NULL ? strlen(s1) : 0;
	int len_s2 = s2 != NULL ? strlen(s2) : 0;
	/**
	 * Calculates the size of s1 excluding the null terminator adds it to the
	 * size of s2 including its null terminator.
	 */
	char *str = malloc((sizeof(char) * len_s1) + (sizeof(char) * len_s2));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		str[len_s1 + i] = s2[i];

	str[len_s1 + i] = '\0';

	return (str);
}
