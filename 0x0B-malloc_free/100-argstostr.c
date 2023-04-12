#include "main.h"

/**
 * argstostr - Concatenates all the arguments of a program.
 *
 * @ac: Number of arguments.
 * @av: Pointer to the array of arguments.
 *
 * Return: A pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	char *str = malloc(sizeof(int *) * ac - 1);

	if (str == NULL || ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			str[k] = av[i][j];

		str[k] = '\n';
		k++
	}

	return (str);
}
