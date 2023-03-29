#include "main.h"

/**
 * *_strcmp - Compares two strings.
 *
 * @s1: First string to compare.
 * @s2: Second string to compare.
 *
 * Return: 0 if the two strings are equal,
 *	less than 0 if s1 compares less than s2,
 *	greater than 0 if s1 compares greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i, count = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
			count--;
		else if (s1[i] > s2[i])
			count++;
	}
	return (count);
}
