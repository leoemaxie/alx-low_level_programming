#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers and prints the result.
 *
 * @argc: Number of arguments.
 * @argv: Pointer to the array of arguments.
 *
 * Return: 0 if there is no error, 1 otherwise.
 */
int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	printf("%i\n", n1 * n2);

	return (0);
}
