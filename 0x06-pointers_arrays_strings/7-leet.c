#include "main.h"
/**
 * leet - Encodes a string into 1337.
 *
 * @s: The string.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *s)
{
	int i, j;
	char lowercase[] = {'a', 'e', 'o', 't', 'l'};
	char uppercase[] = {'A', 'E', 'O', 'T', 'L'};
	int numbers[] = {4, 3, 0, 7, 1};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
			if (s[i] == lowercase[j] || s[i] == uppercase[j])
				s[i] =  numbers[j] + 48;
	}

	return (s);
}
