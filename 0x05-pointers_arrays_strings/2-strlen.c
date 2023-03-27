#include "main.h"

/**
 * _strlen - Gives the length of a string.
 *
 * @s: Char pointer to the string.
 *
 * Return: The length of a string.
 */
int _strlen(char *s)
{
	int len = 0;
	
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return len;
}
