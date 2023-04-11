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
	int i;
	char *str = malloc(sizeof(char **) * ac);

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		while (*av[i])
		{
			*str = *av[i];
			av[i]++;
			str++;
		}
		*str = '\n';
	}

	return (str);
}
