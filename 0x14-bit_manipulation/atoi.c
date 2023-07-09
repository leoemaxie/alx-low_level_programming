#include "main.h"

/**
 * _atoi - Convert a string to an integer number.
 *
 * @s: The string to convert to integer.
 *
 * Return: The integer representation of the string. 0 otherwise.
 */
int _atoi(char *s)
{
	int i = 0;
	int integer = 0;
	int has_minus = 1;

	if (s[0] == 45)
	{
		has_minus = -1;
		i++;
	}

	while (s[i])
	{
		if (s[i] >= 48 && s[i] <= 57)
			integer = (integer * 10) + (s[i] - '0');
		else
			return (0);
		i++;
	}

	return (integer * has_minus);
}

