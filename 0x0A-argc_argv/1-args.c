#include <stdio.h>

/**
 * main - Prints the number of arguments passed into this program.
 *
 * @argc: Number of arguments.
 * @argv: Pointer to the array of arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%i\n", argc - 1);
	return (0);
}
