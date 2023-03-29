#include "main.h"

/**
 * _strncpy - Co0ies strings using at most n bytes.
 *
 * @src: String to copy.
 * @dest: String to copy to.
 * @n: size in bytes of src to uee
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, size = 0;

	for (i = 0; size < n && src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
		size += sizeof(src[i]);
	}
	return (dest);
}

