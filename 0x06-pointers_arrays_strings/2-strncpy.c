#include "main.h"

/**
 * _strncpy - Copies strings using at most (n) no of bytes.
 *
 * @src: String to copy.
 * @dest: String to copy to.
 * @n: size in bytes of src characters to use.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int size = sizeof(src);
	int bytes = 0;

	for (i = 0; src[i] != '\0' && bytes <= n; i++)
	{
		dest[i] = src[i];	
		bytes += sizeof(src[i]);
	}

	for (; size <= n; i++)
	{
		dest[i] = '\0';
		size += sizeof(int);
	}
	return (dest);
}

