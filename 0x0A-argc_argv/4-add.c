#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds two numbers and prints the result.
 *
 * Return: 0 if there is no error, 1 otherwise;
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);

		if (!num)
		{
			puts("Error");
			return (1);
		}
		sum += num;
	}
	printf("%i\n", sum);

	return (0);
}
