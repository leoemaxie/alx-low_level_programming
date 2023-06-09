#include "main.h"

/**
 * _strlen - Gives the length of a string.
 *
 * @s: The string.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		continue;
	return (i);
}

/**
 * _strncat - Concatenates two strings using at most (n) no of bytes.
 *
 * @src: String to concatenate with.
 * @dest: String to concatenate to.
 * @n: size in bytes of src to uee
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = _strlen(dest);
	int bytes = 0;

	for (i = 0; bytes < n && src[i] != '\0'; ++i)
	{
		dest[len + i] = src[i];
		bytes += sizeof(src[i]);
	}
	return (dest);
}

