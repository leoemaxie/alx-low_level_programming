#include "main.h"

/**
 * * check_delimeter - Checks whether a charactee is a delimeter.
 * Helper function for cap_string.
 *
 * @c: Character to be checked.
 * 
 * Return: 1 if c is a delimeter, 0 otherwise.
 */
int check_delimeter(char c)
{
	int i;
	char delimeter[] = {'\t', '\n', ' ', ',', '.', ';', '(', ')', '!', '{', '}', '?', '"'};
	
	for (i = 0; delimeter[i] != '\0'; i++)
	{
		if (c == delimeter[i])
			return (1);
	}

	return (0);
}

/**
 * reverse_array - Reverses the content of an array of integers.
 *
 * @a: Pointer to the array.
 * @n: Number of elements of the array.
 *
 * Return: Nothing. 
 */
char *cap_string(char *s)
{
	int i;
	int next;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (check_delimeter(s[i]))
		{
			next = i + 1;
			if (s[next] >= 'a' && s[next] <= 'z')
				s[next] = s[next] - 32;
		}
	}

	return (s);
}
