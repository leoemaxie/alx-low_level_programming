#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 *
 * @s: Pointer to the string.
 *
 * Return: Pointer to string s
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 'n' || s[i] > 'N')
		{
			s[i] = s[i] + 13;
			continue;
		}
		s[i] = s[i] - 13;
	}

	return (s);
}
