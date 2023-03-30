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
 * _strcat - Concatenates two strings.
 *
 * @src: String to concatenate with.
 * @dest: String to concatenate to.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len = _strlen(dest);

	for (i = 0; src[i] != '\0'; ++i)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}
