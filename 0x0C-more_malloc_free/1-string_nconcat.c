#include "main.h"

/**
 * string_nconcat - Concatenates two strings using a given number of bytes.
 *
 * @s1: The first string.
 * @s2: The second string.
 * @n: Number of bytes of s2 to use.
 *
 * Return: A pointer to the allocated memory which contains s1, followed by the
 * first n bytes of s2, and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len_s1, len_s2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	str = malloc(len_s1 + n + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i <= len_s1; i++)
		str[i] = s1[i];
	for (i = 0; i <= n; i++)
	{
		if (i > len_s2)
			break;
		str[len_s1 + i] = s2[i];
	}
	str[len_s1 + i] = '\0';

	return (str);
}
